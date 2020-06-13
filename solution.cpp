#include <vector>
#include <map>
#include <list>
#include <string>
#include <iostream>
#include<algorithm>

using namespace std;

typedef vector<string>::size_type size_type;

int b_search(vector<string> l1, string& s1) {
    size_type low = 0, high = l1.size();
    while (low <= high) {
        size_type mid = (low + high) / 2;
        if (l1[mid] == s1) {
            return mid;
        } else if (l1[mid] > s1)
            high = mid;
        else
            low = mid + 1;
    }
    return -1;
}

int main() {
    string str;
    vector<string> vec;
    cout << "请输入单词列表：" << endl;
    while (cin >> str && str != "-1") {
        vec.push_back(str);
    }
    sort(vec.begin(), vec.end());
    cout << "请输入要搜索的单词：" << endl;
    while (cin >> str && str != "-1") {
        cout << b_search(vec, str) << endl;
    }
}