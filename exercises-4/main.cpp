//
// Created by Fuxin on 2019/10/25.
//
#include "Student_info.h"
#include "grade.h"

#include <iostream>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <string>
#include <stdexcept>

using std::cout;            using std::cin;
using std::vector;          using std::string;
using std::setprecision;    using std::endl;
using std::streamsize;      using std::sort;
using std::domain_error;    using std::istream;
using std::max;             using std::setw;

int main() {
    vector<Student_info> students;
    Student_info record;
    string::size_type maxlen = 0;
    // 读取并存储所有学生的数据
    // 不变式:
    //      students 包含了所有的学生记录
    //      max 包含了 students 中最长的姓名
    while (read(cin, record)) {
        maxlen = max(maxlen, record.name.size());
        students.push_back(record);
    }
    sort(students.begin(), students.end(), compare);

    for (std::vector<Student_info>::size_type i = 0; i < students.size(); ++i) {

        cout << setw(maxlen) << students[i].name << "\t";

        try {
            double final_grade = grade(students[i]);
            streamsize prec = cout.precision();
            cout << setprecision(3)
                 << final_grade
                 << setprecision(prec);
        } catch (domain_error &e) {
            cout << e.what();
        }
        cout << endl;
    }
    return 0;
}
