#ifndef CLASSMATRIX_H
#define CLASSMATRIX_H
#include <iostream>
using namespace std;
class Matrix {
public:
    Matrix();
    Matrix(const Matrix& other);
    ~Matrix();
    Matrix& operator=(const Matrix& other);
    Matrix operator+(const Matrix& other) const;
    Matrix operator-(const Matrix& other) const;
    Matrix operator*(const Matrix& other) const;
    Matrix operator*(const int i) const;
    bool operator==(const Matrix& other) const;
    void setValues();
    void print() const;
private:
    int** data;
};

#endif