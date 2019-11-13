//
// Created by Fuxin on 2019/11/13.
//

#include <iostream>
#include <map>
#include <vector>
#include <string>

using std::cin;     using std::cout;
using std::endl;    using std::string;
using std::map;     using std::vector;
using std::istream;

vector<string> split(const string &s) {
    vector<string> ret;
    string::size_type size = s.size(), i = 0, j;
    while (i != size) {
        while (i != size && isspace(s[i])) {
            i++;
        }
        j = i;
        while (j != size && !isspace(s[j])) {
            j++;
        }
        if (i != j) {
            string str = s.substr(i, j - i);
            ret.push_back(str);
            i = j;
        }
    }
    return ret;
}

map<string, vector<int>> xref(istream& in, vector<string> find_words(const string&) = split) {
    string line;
    int line_num = 0;
    map<string, vector<int>> ret;
    while (getline(in, line)) {
        ++line_num;
        vector<string> words = find_words(line);
        for (auto const& word: words) {
            ret[word].push_back(line_num);
        }
    }
    return ret;
}

int main() {
    map<string, vector<int>> xref_table = xref(cin);
    for (auto const &pair: xref_table) {
        cout << pair.first << " occurs on line(s): ";
        auto lines_it = pair.second.begin();
        cout << *lines_it;
        ++lines_it;
        while (lines_it != pair.second.end()) {
            cout << ", " << *lines_it;
            ++lines_it;
        }
        cout << endl;
    }
    return 0;
}