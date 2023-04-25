#pragma once

namespace MyStack {
    template <int N, class T>
    class Stack {
    public:
        Stack();
        void push(const T& item);
        T pop();
        bool isEmpty() const;
        bool isFull() const;
    private:
        T m_data[N];
        int m_top;
    };
}
#include "Stack.inl"