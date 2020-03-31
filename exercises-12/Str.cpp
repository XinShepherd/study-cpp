//
// Created by Fuxin on 2020/3/31.
//

#include "Str.h"

std::istream &operator>>(std::istream &in, Str str) {
    str.data.clear();
    char c;
    while (in.get(c) && isspace(c))
        ;
    if (in) {
        do str.data.push_back(c);
        while (in.get(c) && !isspace(c));

    }
    return in;
}

std::ostream &operator<<(std::ostream & out, const Str & s) {
    for (Str::size_type i = 0; i < s.size(); ++i) {
        out << s[i];
    }
    return out;
}

Str operator+(const Str & s1, const Str & s2) {
    Str s = s1;
    s += s2;
    return s;
}
