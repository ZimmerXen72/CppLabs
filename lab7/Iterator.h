#pragma once
#include <cstddef>
#include <iterator>

template <typename T>
class Iterator {
public:
    using iterator_category = std::random_access_iterator_tag;
    using value_type = T;
    using difference_type = std::ptrdiff_t;
    using pointer = T*;
    using reference = T&;
    Iterator(pointer ptr, size_t capacity, size_t head);
    reference operator*() const;
    Iterator& operator++();
    bool operator!=(const Iterator& other) const;
    difference_type operator-(const Iterator& other) const;

private:
    pointer ptr_;
    size_t capacity_;
    size_t head_;
};
