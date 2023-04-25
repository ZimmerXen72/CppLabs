#include "Exceptions.h"

namespace MyExceptions {
    const char* FindMinException::what() const noexcept {
        return "Error in FindMin function!";
    }
    const char* NonComparableException::what() const noexcept {
        return "Error: elements cannot be compared!";
    }
    const char* EqualValuesException::what() const noexcept {
        return "Error: both arguments of the function are equal!";
    }
}