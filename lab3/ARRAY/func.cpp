#include "header.h"
using namespace std;
vector<int> concat_vectors(const vector<int>& v1, const vector<int>& v2) {
    vector<int> result;
    result.reserve(v1.size() + v2.size());
    result.insert(result.end(), v1.begin(), v1.end());
    result.insert(result.end(), v2.begin(), v2.end());
    return result;
}

bool compare_vector_lengths(const vector<int>& v1, const vector<int>& v2) {
    return v1.size() == v2.size();
}