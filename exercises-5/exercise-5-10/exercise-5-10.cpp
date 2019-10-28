//
// Created by Fuxin on 2019/10/28.
//

#include <iostream>
#include <vector>
#include <string>

using std::cout;        using std::cin;
using std::endl;        using std::string;
using std::vector;

bool is_echo_str(const string &str){
    typedef string::size_type size_type;
    size_type size = str.size();
    for (size_type i = 0, j = size - 1; i < size; ++i, --j) {
        if (str[i] != str[j]) {
            return false;
        }
    }
    return true;
}


vector<string> find_echo_str(const vector<string> &vec) {
    vector<string> echo_vec;
    for (const string &word: vec) {
        if (is_echo_str(word)) {
            echo_vec.push_back(word);
        }
    }
    return echo_vec;
}

string find_max_len_str(const vector<string> &vec) {
    typedef string::size_type size_type;
    size_type max = 0;
    string max_str;
    for (const string &word: vec) {
        if (word.length() > max) {
            max = word.length();
            max_str = word;
        }
    }
    return max_str;
}

int main() {
    string s;
    vector<string> words;
    cout << "请输入单词集：";
    while (cin >> s) {
        words.push_back(s);
    }
    vector<string> echo_str_vec = find_echo_str(words);
    if (echo_str_vec.empty()) {
        cout << "没有找到回文";
        return 1;
    }
    string max_echo_str = find_max_len_str(echo_str_vec);
    for (const string &word : echo_str_vec) {
        cout << word << endl;
    }
    cout << "最长回文：" << max_echo_str << endl;
    return 0;
}