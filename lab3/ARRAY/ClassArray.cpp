#include "ClassArray.h"

Array::Array() {
}
Array::Array(const Array& other) {
    data = other.data;
}
Array::~Array() {
}
Array& Array::operator=(const Array& other) {
    if (this == &other) {
        return *this;
    }
    data = other.data;
    return *this;
}
Array Array::operator+(const Array& other) const {
    Array result;
    result.data = data;
    result.data.insert(result.data.end(), other.data.begin(), other.data.end());
    return result;
}

bool Array::operator<(const Array& other) const {
    return data.size() < other.data.size();
}
void Array::inputArrayData() {
    int n;
    cin >> n;
    cout << endl;
    for (int i = 0; i < n; ++i) {
        int number;
        cin >> number;
        data.push_back(number);
    }
    cout << endl;
}
void Array::print() const {
    for (int i : data) {
        cout << i;
    }
    cout << endl;
}