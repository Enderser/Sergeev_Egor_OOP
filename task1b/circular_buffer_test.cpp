#include <gtest/gtest.h>
#include "circular_buffer.h"

// Test: Checking the constructor with capacity
TEST(CircularBufferTest, ConstructorWithCapacity) {
    CircularBuffer buffer(5);
    EXPECT_EQ(buffer.size(), 0);
    EXPECT_EQ(buffer.capacity(), 5);
    EXPECT_TRUE(buffer.empty());
    EXPECT_FALSE(buffer.full());
}

// Test: Adding an element to the end of the buffer
TEST(CircularBufferTest, PushBack) {
    CircularBuffer buffer(3);
    buffer.push_back('A');
    EXPECT_EQ(buffer.size(), 1);
    EXPECT_EQ(buffer.front(), 'A');
    EXPECT_EQ(buffer.back(), 'A');

    buffer.push_back('B');
    EXPECT_EQ(buffer.size(), 2);
    EXPECT_EQ(buffer.front(), 'A');
    EXPECT_EQ(buffer.back(), 'B');

    buffer.push_back('C');
    EXPECT_EQ(buffer.size(), 3);
    EXPECT_TRUE(buffer.full());
}

// Test: Adding an element when the buffer is full
TEST(CircularBufferTest, PushBackOverwrite) {
    CircularBuffer buffer(2);
    buffer.push_back('A');
    buffer.push_back('B');
    buffer.push_back('C'); // should overwrite 'A'
    EXPECT_EQ(buffer.size(), 2);
    EXPECT_EQ(buffer.front(), 'B');
    EXPECT_EQ(buffer.back(), 'C');
}

// Test: Adding an element to the beginning of the buffer
TEST(CircularBufferTest, PushFront) {
    CircularBuffer buffer(3);
    buffer.push_front('A');
    EXPECT_EQ(buffer.size(), 1);
    EXPECT_EQ(buffer.front(), 'A');
    EXPECT_EQ(buffer.back(), 'A');

    buffer.push_front('B');
    EXPECT_EQ(buffer.size(), 2);
    EXPECT_EQ(buffer.front(), 'B');
    EXPECT_EQ(buffer.back(), 'A');

    buffer.push_front('C');
    EXPECT_EQ(buffer.size(), 3);
    EXPECT_EQ(buffer.front(), 'C');
}

// Test: Extracting an element from the end of the buffer
TEST(CircularBufferTest, PopBack) {
    CircularBuffer buffer(3);
    buffer.push_back('A');
    buffer.push_back('B');
    buffer.pop_back();
    EXPECT_EQ(buffer.size(), 1);
    EXPECT_EQ(buffer.back(), 'A');
}

// Test: Extracting an element from the beginning of the buffer
TEST(CircularBufferTest, PopFront) {
    CircularBuffer buffer(3);
    buffer.push_back('A');
    buffer.push_back('B');
    buffer.pop_front();
    EXPECT_EQ(buffer.size(), 1);
    EXPECT_EQ(buffer.front(), 'B');
}

// Test: Checking the at() method with the correct index
TEST(CircularBufferTest, AtValidIndex) {
CircularBuffer buffer(3);
buffer.push_back('A');
    buffer.push_back('B');
    EXPECT_EQ(buffer.at(0), 'A');
    EXPECT_EQ(buffer.at(1), 'B');
}

// Test: Checking the at() method with an incorrect index
TEST(CircularBufferTest, AtInvalidIndex) {
    CircularBuffer buffer(3);
    buffer.push_back('A');
    EXPECT_THROW(buffer.at(1), std::out_of_range);
}

// Test: Capacity change
TEST(CircularBufferTest, SetCapacity) {
    CircularBuffer buffer(3);
    buffer.push_back('A');
    buffer.push_back('B');
    buffer.set_capacity(5);
    EXPECT_EQ(buffer.capacity(), 5);
    EXPECT_EQ(buffer.size(), 2);
    EXPECT_EQ(buffer.front(), 'A');
    EXPECT_EQ(buffer.back(), 'B');
}

// Test: Assignment operation
TEST(CircularBufferTest, AssignmentOperator) {
    CircularBuffer buffer1(3);
    buffer1.push_back('A');
    buffer1.push_back('B');

    CircularBuffer buffer2(3);
    buffer2 = buffer1;

    EXPECT_EQ(buffer2.size(), 2);
    EXPECT_EQ(buffer2.front(), 'A');
    EXPECT_EQ(buffer2.back(), 'B');
}

// Test: Comparison Operators
TEST(CircularBufferTest, EqualityOperator) {
    CircularBuffer buffer1(3);
    buffer1.push_back('A');
    buffer1.push_back('B');

    CircularBuffer buffer2(3);
    buffer2.push_back('A');
    buffer2.push_back('B');

    EXPECT_TRUE(buffer1 == buffer2);
    buffer2.push_back('C');
    EXPECT_FALSE(buffer1 == buffer2);
}
