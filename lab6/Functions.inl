#pragma once
#include "Functions.h"
#include <vector>

namespace MyFunctions {
    template <typename InputIt, typename UnaryPredicate>
    bool any_of(InputIt first, InputIt last, UnaryPredicate pred) {
        for (InputIt it = first; it != last; ++it) {
            if (pred(&(*it))) return true;
        }
        return false;
    }
    template<typename ForwardIt, typename Compare>
    bool is_sorted(ForwardIt first, ForwardIt last, Compare comp) {
        if (first == last) return true;

        ForwardIt next = first;
        ++next;

        for (; next != last; ++first, ++next) {
            if (comp(&(*next), &(*first))) return false;
        }

        return true;
    }

    template<typename BidirIt>
    bool is_palindrome(BidirIt first, BidirIt last) {
        while (first != last && first != --last) {
            if (*first != *last) return false;
            ++first;
        }
        return true;
    }

    template<typename InputIt>
    bool is_even(InputIt x) {
        return *x % 2 == 0;
    }

    template<typename InputIt>
    bool non_decreasing(InputIt a, InputIt b) {
        return *a >= *b;
    }
    bool is_even_ptr(const int* x) {
        return MyFunctions::is_even(x);
    }

    bool non_decreasing_ptr(const int* a, const int* b) {
        return MyFunctions::non_decreasing(a, b);
    }
}
