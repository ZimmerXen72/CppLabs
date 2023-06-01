#pragma once
#include "RingBuffer.h"

template <typename T>
RingBuffer<T>::RingBuffer(size_t max_capacity)
        : max_capacity_(max_capacity), size_(0), buffer_(new T[max_capacity]), head_(0) {}

template <typename T>
RingBuffer<T>::~RingBuffer() {
    delete[] buffer_;
}

template <typename T>
size_t RingBuffer<T>::size() const {
    return size_;
}

template <typename T>
bool RingBuffer<T>::empty() const {
    return size_ == 0;
}

template <typename T>
size_t RingBuffer<T>::capacity() const {
    return max_capacity_;
}

template <typename T>
size_t RingBuffer<T>::max_capacity() const {
    return max_capacity_;
}

template <typename T>
const T& RingBuffer<T>::operator[](size_t index) const {
    if (index >= size_) {
        throw std::out_of_range("Index out of range");
    }
    return buffer_[(head_ + index) % max_capacity_];
}

template <typename T>
T& RingBuffer<T>::operator[](size_t index) {
    if (index >= size_) {
        throw std::out_of_range("Index out of range");
    }
    return buffer_[(head_ + index) % max_capacity_];
}

template <typename T>
Iterator<T> RingBuffer<T>::front() {
    if (size_ == 0) {
        throw std::out_of_range("Buffer is empty");
    }
    return Iterator<T>(&buffer_[head_], max_capacity_, 0);
}

template <typename T>
Iterator<T> RingBuffer<T>::back() {
    if (size_ == 0) {
        throw std::out_of_range("Buffer is empty");
    }
    return Iterator<T>(&buffer_[(head_ + size_ - 1) % max_capacity_], max_capacity_, size_ - 1);
}

template <typename T>
void RingBuffer<T>::reserve(size_t new_max_capacity) {
    if (new_max_capacity < size_) {
        throw std::logic_error("New max capacity is less than current size");
    }

    T* new_buffer = new T[new_max_capacity];

    for (size_t i = 0; i < size_; ++i) {
        new_buffer[i] = std::move((*this)[i]);
    }

    delete[] buffer_;
    buffer_ = new_buffer;
    max_capacity_ = new_max_capacity;
}

template <typename T>
void RingBuffer<T>::resize(size_t new_max_capacity) {
    if (new_max_capacity < size_) {
        throw std::logic_error("New max capacity is less than current size");
    }

    reserve(new_max_capacity);
}

template <typename T>
void RingBuffer<T>::push_back(const T& value) {
    if (size_ == max_capacity_) {
        throw std::logic_error("Buffer is full");
    }

    buffer_[(head_ + size_) % max_capacity_] = value;
    size_++;
}

template <typename T>
void RingBuffer<T>::push_front(const T& value) {
    if (size_ == max_capacity_) {
        throw std::logic_error("Buffer is full");
    }

    head_ = (head_ - 1 + max_capacity_) % max_capacity_;
    buffer_[head_] = value;
    size_++;
}

template <typename T>
void RingBuffer<T>::insert(size_t index, const T& value) {
    if (index > size_) {
        throw std::out_of_range("Index out of range");
    }

    if (size_ == max_capacity_) {
        throw std::logic_error("Buffer is full");
    }

    for (size_t i = size_; i > index; --i) {
        buffer_[(head_ + i) % max_capacity_] = std::move(buffer_[(head_ + i - 1) % max_capacity_]);
    }

    buffer_[(head_ + index) % max_capacity_] = value;
    size_++;
}

template <typename T>
void RingBuffer<T>::pop_back() {
    if (size_ > 0) {
        size_--;
    }
}

template <typename T>
void RingBuffer<T>::pop_front() {
    if (size_ > 0) {
        head_ = (head_ + 1) % max_capacity_;
        size_--;
    }
}
