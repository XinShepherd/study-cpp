//
// Created by 付鑫 on 2020/3/17.
//

#ifndef STUDY_CPP_STUDENT_INFO_H
#define STUDY_CPP_STUDENT_INFO_H

#include <iostream>
#include <string>
#include <vector>

class Student_info {

public:
    Student_info();
    explicit Student_info(std::istream&);
    std::istream& read(std::istream &);
    double grade() const ;
    std::string name() const { return n; };
    bool isValid() const { return !homework.empty(); } ;

private:
    std::string n;
    std::vector<double> homework;
    double midterm, final;
};

bool compare(const Student_info&, const Student_info&);

std::istream &read_hw(std::istream &, std::vector<double> &);

#endif //STUDY_CPP_STUDENT_INFO_H
