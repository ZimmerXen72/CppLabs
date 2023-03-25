#ifndef MATRIX_H
#define MATRIX_H

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
    void print() const;
private:
    int** data;
};

#endif  // MATRIX_H