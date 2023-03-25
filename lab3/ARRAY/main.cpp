#include "header.h"
#include <iostream>
#include <vector>
int main() {
    vector<int> v1 = {3, 2, 1};
    vector<int> v2 = {4, 5, 6, 7};
    vector<int> concatenated = concat_vectors(v1, v2);
    cout << "Concatenated vector: ";
    for (int i : concatenated) {
        cout << i << " ";
    }
    cout << endl;
    bool equal_lengths = compare_vector_lengths(v1, v2);
    cout << "Lengths are equal: " << boolalpha << equal_lengths << endl;

    return 0;
}