#include "circular_buffer.h"
#include <stdexcept> // for exceptions
#include <algorithm> // for std::swap

using namespace std;

// Constructors and destructor

CircularBuffer::CircularBuffer()
    : buffer(nullptr), head(0), tail(0), capacity_(0), size_(0) {}

CircularBuffer::~CircularBuffer() {
    delete[] buffer;
}

CircularBuffer::CircularBuffer(int capacity)
    : buffer(new value_type[capacity]), head(0), tail(0), capacity_(capacity), size_(0) {}

CircularBuffer::CircularBuffer(const CircularBuffer& cb)
    : buffer(new value_type[cb.capacity_]), head(cb.head), tail(cb.tail), capacity_(cb.capacity_), size_(cb.size_) {
    for (int i = 0; i < cb.size_; ++i)
        buffer[i] = cb.buffer[i];
}

// Index Access Methods

value_type& CircularBuffer::operator[](int i) {
    return buffer[(head + i) % capacity_];
}

const value_type& CircularBuffer::operator[](int i) const {
    return buffer[(head + i) % capacity_];
}

value_type& CircularBuffer::at(int i) {
    if (i < 0 || i >= size_) throw out_of_range("Index out of range");
    return (*this)[i];
}

const value_type& CircularBuffer::at(int i) const {
    if (i < 0 || i >= size_) throw out_of_range("Index out of range");
    return (*this)[i];
}

// Methods of access to the first and last element

value_type& CircularBuffer::front() {
    if (empty()) throw out_of_range("Buffer is empty");
    return buffer[head];
}

value_type& CircularBuffer::back() {
    if (empty()) throw out_of_range("Buffer is empty");
    return buffer[(tail - 1 + capacity_) % capacity_];
}

// Buffer linearization

value_type* CircularBuffer::linearize() {
    if (is_linearized()) return buffer;

    value_type* new_buffer = new value_type[capacity_];
    for (int i = 0; i < size_; ++i)
        new_buffer[i] = (*this)[i];

    delete[] buffer;
    buffer = new_buffer;
    head = 0;
    tail = size_;

    return buffer;
}

bool CircularBuffer::is_linearized() const {
    return head == 0;
}

void CircularBuffer::rotate(int new_begin) {
    if (new_begin < 0 || new_begin >= size_) throw out_of_range("Invalid rotation index");
    head = (head + new_begin) % capacity_;
    tail = (head + size_) % capacity_;
}

// Getting information about the buffer

int CircularBuffer::size() const {
    return size_;
}

bool CircularBuffer::empty() const {
    return size_ == 0;
}

bool CircularBuffer::full() const {
    return size_ == capacity_;
}

int CircularBuffer::reserve() const {
    return capacity_ - size_;
}

int CircularBuffer::capacity() const {
    return capacity_;
}

// Changing the buffer capacity and size

void CircularBuffer::set_capacity(int new_capacity) {
    if (new_capacity < size_) throw invalid_argument("New capacity must be greater than current size");

    value_type* new_buffer = new value_type[new_capacity];
    for (int i = 0; i < size_; ++i)
        new_buffer[i] = (*this)[i];

    delete[] buffer;
    buffer = new_buffer;
    capacity_ = new_capacity;
    head = 0;
    tail = size_;
}

void CircularBuffer::resize(int new_size, const value_type& item) {
    if (new_size > capacity_) throw invalid_argument("New size exceeds buffer capacity");

    if (new_size > size_)
        for (int i = size_; i < new_size; ++i)
            push_back(item);
    else
        for (int i = size_; i > new_size; --i)
            pop_back();
    size_ = new_size;
}

// Inserting and deleting elements

void CircularBuffer::push_back(const value_type& item) {
    if (full()) head = (head + 1) % capacity_;
    else ++size_;
    buffer[tail] = item;
    tail = (tail + 1) % capacity_;
}

void CircularBuffer::push_front(const value_type& item) {
    if (full()) tail = (tail - 1 + capacity_) % capacity_;
    else ++size_;
    head = (head - 1 + capacity_) % capacity_;
    buffer[head] = item;
}

void CircularBuffer::pop_back() {
    if (empty()) throw out_of_range("Buffer is empty");
    tail = (tail - 1 + capacity_) % capacity_;
    --size_;
}

void CircularBuffer::pop_front() {
    if (empty()) throw out_of_range("Buffer is empty");
    head = (head + 1) % capacity_;
    --size_;
}

// Assignment and exchange operations

CircularBuffer& CircularBuffer::operator=(const CircularBuffer& cb) {
    if (this != &cb) {
        delete[] buffer;

        buffer = new value_type[cb.capacity_];
        capacity_ = cb.capacity_;
        head = cb.head;
        tail = cb.tail;
        size_ = cb.size_;

        for (int i = 0; i < size_; ++i)
            buffer[i] = cb.buffer[i];
    }
    return *this;
}

void CircularBuffer::swap(CircularBuffer& cb) {
    std::swap(buffer, cb.buffer);
    std::swap(head, cb.head);
    std::swap(tail, cb.tail);
    std::swap(capacity_, cb.capacity_);
    std::swap(size_, cb.size_);
}

// Comparison operators

bool operator==(const CircularBuffer& a, const CircularBuffer& b) {
    if (a.size_ != b.size_) return false;
    for (int i = 0; i < a.size_; ++i)
        if (a[i] != b[i])
            return false;
    return true;
}

bool operator!=(const CircularBuffer& a, const CircularBuffer& b) {
    return !(a == b);
}
