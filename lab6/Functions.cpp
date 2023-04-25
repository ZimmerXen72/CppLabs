#include "Functions.h"

namespace MyFunctions {
    template<typename InputIt, typename UnaryPredicate>
    bool any_of(InputIt first, InputIt last, UnaryPredicate pred) {
        for (auto it = first; it != last; ++it) {
            if (pred(*it)) {
                return true;
            }
        }
        return false;
    }

    template <typename ForwardIt, typename Compare>
    bool is_sorted(ForwardIt first, ForwardIt last, Compare comp) {
        if (first == last) {
            return true;
        }

        ForwardIt next = first;
        ++next;

        while (next != last) {
            if (comp(*next, *first)) {
                return false;
            }
            ++first;
            ++next;
        }

        return true;
    }

    template<typename BidirIt>
    bool is_palindrome(BidirIt first, BidirIt last) {
        while (first < last) {
            if (*first != *last) {
                return false;
            }
            ++first;
            --last;
        }
        return true;
    }
}

template bool MyFunctions::any_of<int*, bool(*)(int)>(int*, int*, bool(*)(int));
template bool MyFunctions::is_sorted<int*, bool(*)(int, int)>(int*, int*, bool(*)(int, int));