#include "ClassMatrix.h"
using namespace std;
Matrix::Matrix() {
    data = new int*[3];
    for (int i = 0; i < 3; ++i) {
        data[i] = new int[3];
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            data[i][j] = i;
        }
    }
}
Matrix::Matrix(const Matrix& other) {
    data = new int*[3];
    for (int i = 0; i < 3; ++i) {
        data[i] = new int[3];
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            data[i][j] = other.data[i][j];
        }
    }
}
Matrix::~Matrix() {

    for (int i = 0; i < 3; ++i) {
        delete[] data[i];
    }
    delete[] data;
}

Matrix& Matrix::operator=(const Matrix& other) {
    if (this != &other) {
        for (int i = 0; i < 3; ++i) {
            delete[] data[i];
        }
        delete[] data;
        data = new int*[3];
        for (int i = 0; i < 3; ++i) {
            data[i] = new int[3];
        }
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                data[i][j] = other.data[i][j];
            }
        }
    }
    return *this;
}

Matrix Matrix::operator+(const Matrix& other) const {
    Matrix result;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            result.data[i][j] = data[i][j] + other.data[i][j];
        }
    }
    return result;
}

Matrix Matrix::operator-(const Matrix& other) const {
    Matrix result;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            result.data[i][j] = data[i][j] - other.data[i][j];
        }
    }
    return result;
}

Matrix Matrix::operator*(const Matrix& other) const {
    Matrix result;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 3; ++k) {
                result.data[i][j] += data[i][k] * other.data[k][j];
            }
        }
    }
    return result;
}

Matrix Matrix::operator*(const int scalar) const {
    Matrix result;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            result.data[i][j] = data[i][j] * scalar;
        }
    }
    return result;
}

bool Matrix::operator==(const Matrix& other) const {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (data[i][j] != other.data[i][j]) {
                return false;
            }
        }
    }
    return true;
}
void Matrix::setValues() {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> data[i][j];
        }
    }
}
void Matrix::print() const {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << data[i][j] << ' ';
        }
        cout << endl;
    }
}