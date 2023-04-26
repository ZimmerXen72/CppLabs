#pragma once
#include "Exceptions.h"

namespace MyStack {
    template <int N, class T>
    MyStack::Stack<N, T>::Stack() : m_top(-1) {
    }

    template <int N, class T>
    void MyStack::Stack<N, T>::push(const T& item) {
        if (isFull()) {
            throw MyExceptions::StackOverflowException();
        }
        m_data[++m_top] = item;
    }

    template <int N, class T>
    T MyStack::Stack<N, T>::pop() {
        if (isEmpty()) {
            throw MyExceptions::StackEmptyException();
        }
        return m_data[m_top--];
    }

    template <int N, class T>
    bool MyStack::Stack<N, T>::isEmpty() const {
        return (m_top == -1);
    }

    template <int N, class T>
    bool MyStack::Stack<N, T>::isFull() const {
        return (m_top == N - 1);
    }
}