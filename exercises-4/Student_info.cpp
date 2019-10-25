//
// Created by Fuxin on 2019/10/25.
//

#include "Student_info.h"

#include <iostream>
#include <vector>

using std::istream;
using std::vector;

bool compare(const Student_info &a, const Student_info &b) {
    return a.name < b.name;
}

istream &read(istream &in, Student_info &info) {
    in >> info.name >> info.midterm >> info.final;
    return read_hw(in, info.homework);
}

istream &read_hw(istream &in, vector<double> &hw) {
    if (in) {
        hw.clear();
        double x;
        while (in >> x) {
            hw.push_back(x);
        }
        in.clear();
    }
    return in;
}
