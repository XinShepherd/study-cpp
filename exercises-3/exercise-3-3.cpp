//
// Created by Fuxin on 2019/10/25.
//
#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;        using std::cin;
using std::vector;      using std::endl;
using std::string;      using std::sort;

int main() {
    cout << "请输入多个单次，按结束键结束: ";
    string x;
    vector<string> words;
    while (cin >> x) {
        words.push_back(x);
    }
    typedef vector<string>::size_type vec_sz;
    vec_sz size = words.size();
    if (size == 0) {
        cout << "单词数量不能为空，请重新运行程序！" << endl;
        return 1;
    }
    sort(words.begin(), words.end());
    string word;
    vec_sz number = 0;
    for (vec_sz i = 0; i < size; ++i) {
        if (word.empty()) {
            word = words[i];
        }
        if (word == words[i]) {
            number++;
        } else {
            cout << word << "\t" << number << endl;
            number = 1;
            word = words[i];
        }
    }
    // 最后一个
    cout << word << "\t" << number << endl;

    return 0;
}