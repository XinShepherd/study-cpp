//
// Created by Fuxin on 2019/10/25.
//

#include "grade.h"
#include "median.h"
#include "Student_info.h"
#include <vector>
#include <stdexcept>

using std::vector;      using std::domain_error;

double grade(double midterm, double final, double median) {
    return midterm * 0.2 + final * 0.4 + median * 0.4;
}

double grade(double midterm, double final, const vector<double>& hw) {
    if (hw.empty()) {
        throw domain_error("Homework grade vector can not be empty.");
    }
    return grade(midterm, final, median(hw));
}

double grade(const Student_info &info) {
    return grade(info.midterm, info.final, info.homework);
}
