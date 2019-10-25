//
// Created by Fuxin on 2019/10/25.
//

#include "median.h"
#include <algorithm>
#include <stdexcept>
#include <vector>

using std::vector;      using std::domain_error;
using std::sort;

double median(vector<double> vec) {
    typedef vector<double>::size_type vec_sz;
    vec_sz size = vec.size();
    if (size == 0) {
        throw domain_error("empty vector");
    }
    sort(vec.begin(), vec.end());
    vec_sz mid = size / 2;
    return mid % 2 == 0
           ? (vec[mid] + vec[mid - 1]) / 2
           : vec[mid];
}
