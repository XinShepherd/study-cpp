//
// Created by Fuxin on 2019/10/25.
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using std::cout;        using std::cin;
using std::endl;        using std::vector;
using std::istream;     using std::string;
using std::sort;

istream &read(istream &in, vector<string> &words) {
    string word;
    while (in >> word) {
        words.push_back(word);
    }
    return in;
}

int main() {
    vector<string> words;
    cout << "Please enter some words: ";
    read(cin, words);
    if (words.empty()) {
        cout << "Empty words. Please try again." << endl;
        return 1;
    }
    sort(words.begin(), words.end());
    string word = words[0];
    int word_count = 0;
    for (string::size_type i = 0; i < words.size(); ++i) {
        if (word == words[i]) {
            word_count++;
        } else {
            cout << word << "\t" << word_count << endl;
            word = words[i];
            word_count = 1;
        }
    }
    cout << word << "\t" << word_count << endl;
    return 0;
}