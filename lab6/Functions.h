#pragma once
#include <vector>
namespace MyFunctions {
    template<typename InputIt, typename UnaryPredicate>
    bool any_of(InputIt first, InputIt last, UnaryPredicate pred);

    template<typename ForwardIt, typename Compare>
    bool is_sorted(ForwardIt first, ForwardIt last, Compare comp);

    template<typename BidirIt>
    bool is_palindrome(BidirIt first, BidirIt last);

    template<typename InputIt>
    bool is_even(InputIt x);

    template<typename InputIt>
    bool non_decreasing(InputIt a, InputIt b);
}
#include "Functions.inl"