//
// Created by Fuxin on 2019/10/25.
//

#ifndef STUDY_CPP_GRADE_H
#define STUDY_CPP_GRADE_H

#include <vector>
#include "Student_info.h"

double grade(double, double, double);

double grade(double, double, const std::vector<double> &);

double grade(const Student_info &);

#endif //STUDY_CPP_GRADE_H
