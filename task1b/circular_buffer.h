#ifndef CIRCULARBUFFER_H
#define CIRCULARBUFFER_H

typedef char value_type;

class CircularBuffer {
private:
    value_type* buffer; // array storing buffer elements
    int head; // index of the beginning of the buffer
    int tail; // index of the end of the buffer
    int capacity_; // maximum buffer capacity
    int size_; // the current number of elements

public:
	// Constructors and destructor
    CircularBuffer();
    ~CircularBuffer();
    CircularBuffer(const CircularBuffer& cb);
    explicit CircularBuffer(int capacity);
    CircularBuffer(int capacity, const value_type& elem);

    // Access methods by index
	value_type& operator[](int i);
    const value_type& operator[](int i) const;
    value_type& at(int i);
    const value_type& at(int i) const;

    // Methods for accessing the first and last element
	value_type& front();
	const value_type& front() const;
    value_type& back();
    const value_type& back() const;

    // Buffer linearization
    value_type* linearize();
    bool is_linearized() const;
    void rotate(int new_begin);

    // Getting information about the buffer
    int size() const;
    bool empty() const;
    bool full() const;
    int reserve() const;
    int capacity() const;

    // Changing the buffer capacity and size
    void set_capacity(int new_capacity);
    void resize(int new_size, const value_type& item = value_type());

    // Assignment and exchange operations
    CircularBuffer& operator=(const CircularBuffer& cb);
    void swap(CircularBuffer& cb);

    // Inserting and deleting elements
    void push_back(const value_type& item = value_type());
    void push_front(const value_type& item = value_type());
    void pop_back();
    void pop_front();
    void insert(int pos, const value_type& item = value_type());
    void erase(int first, int last);
    void clear();

    // Comparison operators
    friend bool operator==(const CircularBuffer& a, const CircularBuffer& b);
    friend bool operator!=(const CircularBuffer& a, const CircularBuffer& b);
};

#endif // CIRCULARBUFFER_H
