//
// Created by Fuxin on 2019/10/28.
//

#include <iostream>
#include <string>
#include <list>

using std::cout;        using std::cin;
using std::endl;        using std::string;
using std::isupper;     using std::islower;
using std::list;

bool is_all_lower(string &word) {
    for (string::size_type i = 0; i < word.size(); ++i) {
        if (isupper(word[i])) {
            return false;
        }
    }
    return true;
}

list<string> get_lower_words(list<string> &words) {
    list<string> lower_words;
    for (auto iter = words.begin(); iter != words.end();) {
        if (is_all_lower(*iter)) {
            lower_words.push_back(*iter);
            iter = words.erase(iter);
        } else {
            ++iter;
        }
    }
    return lower_words;
}

int main() {
    list<string> words;
    string str;
    while (cin >> str) {
        words.push_back(str);
    }
    if (words.empty()) {
        cout << "没有输入单词，请重新运行！";
        return 1;
    }
    list<string> lower_words = get_lower_words(words);
    for (auto &word: lower_words) {
        cout << word << endl;
    }
    for (auto &word: words) {
        cout << word << endl;
    }
    return 0;
}
