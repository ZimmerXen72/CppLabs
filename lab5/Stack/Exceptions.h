#pragma once
#include <iostream>
using namespace std;

namespace MyExceptions{
    class StackOverflowException : public exception {
    public:
        const char* what() const noexcept override;
    };
    class StackEmptyException : public exception {
    public:
        const char* what() const noexcept override;
    };
}