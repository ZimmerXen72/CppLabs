#pragma once
#include <iostream>
using namespace std;

namespace MyExceptions{
    class FindMinException : public exception {
    public:
        const char* what() const noexcept override;
    };
    class NonComparableException : public FindMinException {
    public:
        const char* what() const noexcept override;
    };
    class EqualValuesException : public FindMinException {
    public:
        const char* what() const noexcept override;
    };
}