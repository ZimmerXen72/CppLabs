#ifndef CLASSARRAY_H
#define CLASSARRAY_H
#include <iostream>
#include <vector>
using namespace std;

class Array {
public:
    Array();
    Array(const Array& other);
    ~Array();
    Array& operator=(const Array& other);
    Array operator+(const Array& other) const;
    bool operator<(const Array& other) const;
    void inputArrayData();
    void print() const;
private:
    vector<int> data;
};

#endif