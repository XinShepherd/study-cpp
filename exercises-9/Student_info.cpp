//
// Created by 付鑫 on 2020/3/17.
//

#include "Student_info.h"
#include "../exercises-4/grade.h"
#include <iostream>

using std::istream;
using std::vector;

std::istream& Student_info::read(std::istream & in){
    in >> n >> midterm >> final;
    read_hw(in, homework);
    return in;
}

Student_info::Student_info(): midterm(0), final(0) {}

Student_info::Student_info(istream& in){
    midterm = 0;
    final = 0;
    read(in);
}

double Student_info::grade() const {
    return ::grade(midterm, final, homework);
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

bool compare(const Student_info &a, const Student_info &b) {
    return a.name() < b.name();
}

