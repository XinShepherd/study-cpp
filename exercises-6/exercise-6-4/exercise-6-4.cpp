//
// Created by Fuxin on 2019/11/2.
//
#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;        using std::endl;
using std::vector;      using std::copy;
using std::back_inserter;

int main() {
    vector<int> u(10, 100);
    vector<int> v;
    copy(u.begin(), u.end(), back_inserter(v));
    for (auto num: v) {
        cout << num << endl;
    }
    return 0;
}
