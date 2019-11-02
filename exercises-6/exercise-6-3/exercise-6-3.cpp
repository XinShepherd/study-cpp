//
// Created by Fuxin on 2019/11/2.
//
#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;        using std::endl;
using std::vector;      using std::copy;

int main() {
    vector<int> u(10, 100);
    vector<int> v;
    // 程序异常退出，解决办法看6-4
    copy(u.begin(), u.end(), v.begin());
    for (auto num: v) {
        cout << num << endl;
    }
    return 0;
}
