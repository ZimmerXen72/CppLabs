#pragma once
#include "Exceptions.h"

namespace MyUtils {
    template<typename T>
    T FindMin(T a, T b) {
        if (a == b) {
            throw MyExceptions::EqualValuesException();
        } else if (!(a < b) && !(b < a)) {
            throw MyExceptions::NonComparableException();
        }
        return (a < b) ? a : b;
    }
}