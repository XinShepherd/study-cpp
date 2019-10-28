//
// Created by Fuxin on 2019/10/28.
//

#include "../../exercises-4/grade.h"
#include "../../exercises-4/Student_info.h"
#include <vector>
#include <iostream>
#include <list>

using std::cout;        using std::cin;
using std::endl;        using std::vector;
using std::string;      using std::list;


vector<Student_info> fail_vector(const vector<Student_info> &students) {
    vector<Student_info> fail;
    for (const Student_info& student: students) {
        if (grade(student) < 60) {
            fail.push_back(student);
        }
    }
    return fail;
}

list<Student_info> fail_list(const list<Student_info> &students) {
    list<Student_info> fail;
    for (const Student_info& student: students) {
        if (grade(student) < 60) {
            fail.push_back(student);
        }
    }
    return fail;
}

int main() {
    vector<Student_info> students;
    list<Student_info>  students_list;
    Student_info record;
    string::size_type maxlen = 0;
    // 读取并存储所有学生的数据
    // 不变式:
    //      students 包含了所有的学生记录
    //      max 包含了 students 中最长的姓名
    while (read(cin, record)) {
        students.push_back(record);
        students_list.push_back(record);
    }
    vector<Student_info> fail = fail_vector(students);
    list<Student_info> fail_l = fail_list(students_list);
    for (const Student_info& student: fail) {
        cout << student.name << "\t" << grade(student) << endl;
    }
    return 0;
}
