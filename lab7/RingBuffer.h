#pragma once
#include <cstddef>
#include <stdexcept>
#include <algorithm>
#include "Iterator.h"

template <typename T>
class RingBuffer {
public:
    explicit RingBuffer(size_t max_capacity);
    ~RingBuffer();
    size_t size() const;
    bool empty() const;
    size_t capacity() const;
    size_t max_capacity() const;
    const T& operator[](size_t index) const;
    T& operator[](size_t index);
    void reserve(size_t new_max_capacity);
    void resize(size_t new_max_capacity);
    void push_back(const T& value);
    void push_front(const T& value);
    void insert(size_t index, const T& value);
    void pop_back();
    void pop_front();
    Iterator<T> front();
    Iterator<T> back();

private:
    size_t max_capacity_;
    size_t size_;
    T* buffer_;
    size_t head_;
};

