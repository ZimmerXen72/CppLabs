#include "Exceptions.h"

namespace MyExceptions{
    const char* StackOverflowException::what() const noexcept {
        return "Error: Stack is overflowed!";
    }
    const char* StackEmptyException::what() const noexcept {
        return "Error: Stack is empty!";
    }
}