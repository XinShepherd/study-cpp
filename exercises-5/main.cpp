//
// Created by Fuxin on 2019/10/28.
//

#include <vector>
#include <iostream>
#include <string>
#include <cctype>

using std::cout;        using std::cin;
using std::endl;        using std::vector;
using std::string;      using std::getline;
using std::isspace;

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

int main() {
    string s;
    while (getline(cin, s)) {
        vector<string> str_vec = split(s);
        for (string::size_type i = 0; i < str_vec.size(); ++i) {
            cout << str_vec[i] << endl;
        }
    }
    return 0;
}
