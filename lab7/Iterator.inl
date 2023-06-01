#pragma once
#include "Iterator.h"

template <typename T>
Iterator<T>::Iterator(pointer ptr, size_t capacity, size_t head)
        : ptr_(ptr), capacity_(capacity), head_(head) {}

template <typename T>
typename Iterator<T>::reference Iterator<T>::operator*() const {
    return ptr_[head_];
}

template <typename T>
Iterator<T>& Iterator<T>::operator++() {
    head_ = (head_ + 1) % capacity_;
    return *this;
}

template <typename T>
bool Iterator<T>::operator!=(const Iterator& other) const {
    return head_ != other.head_;
}

template <typename T>
typename Iterator<T>::difference_type Iterator<T>::operator-(const Iterator& other) const {
    return (head_ + capacity_ - other.head_) % capacity_;
}