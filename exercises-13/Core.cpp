//
// Created by Fuxin on 2020/4/3.
//

#include <algorithm>
#include "Core.h"
#include "../exercises-4/grade.h"


std::istream &Core::read(std::istream & is) {
    read_common(is);
    return read_hw(is, homework);
}

double Core::grade() const {
    return ::grade(midterm, final, homework);
}

std::istream &Core::read_common(std::istream & is) {
    is >> n >> midterm >> final;
    return is;
}

std::istream &read_hw(std::istream &in, std::vector<double> &hw) {
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

std::istream &Grad::read(std::istream & is) {
    read_common(is);
    is >> thesis;
    return read_hw(is, homework);
}

double Grad::grade() const {
    return std::min(Core::grade(), thesis);
}

bool compare(const Core &c1, const Core &c2){
    return c1.name() < c2.name();
}
