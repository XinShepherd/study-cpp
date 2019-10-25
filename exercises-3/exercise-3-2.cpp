//
// Created by Fuxin on 2019/10/25.
//

#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;        using std::cin;
using std::endl;        using std::vector;
using std::sort;

int main() {
    vector<int> collection;
    for (int i = 8; i > 0; --i) {
        collection.push_back(i);
    }
//    sort(collection.begin(), collection.end());
    typedef vector<int>::size_type vec_sz;
    vec_sz size = collection.size();
    vec_sz split_size = size / 4;
    for (int j = 0; j < 8; ++j) {
        if (j % split_size == 0) {
            cout << endl << "第" << (j / split_size + 1) << "组: ";
        }
        cout << collection[j] << " ";
    }

    return 0;
}