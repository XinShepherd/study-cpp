//
// Created by Fuxin on 2019/10/25.
//

#include <iostream>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <string>

using std::cout;            using std::cin;
using std::vector;          using std::string;
using std::setprecision;    using std::endl;
using std::streamsize;      using std::sort;

int main(){
    vector<string> names;
    vector<double> grades;
    typedef vector<string>::size_type  vec_size;
    while (true) {
        cout << "Please enter your first name or enter quit to exit: ";
        string name;
        cin >> name;
        if (name == "quit" || name == "exit") break;
        cout << "Hello, " << name << "!" << endl;
        names.push_back(name);
        // 期中和期末
        cout << "Please enter your midterm and final score: ";
        double midterm, final;
        cin >> midterm >> final;

        // 家庭作业成绩
        cout << "Please enter your homework scores or enter -1 to break: ";
        double x;
        vector<double> homework;
        while (cin >> x) {
            if (x < 0) {
                break;
            }
            homework.push_back(x);
        }

        // 取中值
        typedef vector<double>::size_type vec_sz;
        vec_sz size = homework.size();
        if (size == 0) {
            cout << endl << "You must enter your grades. Please try again." << endl;
            return 1;
        }
        sort(homework.begin(), homework.end());
        vec_sz mid = size / 2;
        double median = (size % 2) == 0
                        ? (homework[mid] + homework[mid - 1]) / 2
                        : homework[mid];
        // 计算总成绩
        double grade = 0.2 * midterm + 0.4 * final + 0.4 * median;
        grades.push_back(grade);

    }
    if (names.empty()) {
        cout << "Empty student collection! You must enter your grades. Please try again." << endl;
        return 1;
    }
    for (vec_size i = 0; i < grades.size(); ++i) {
        // 输出并计算总成绩
        streamsize prec = cout.precision();
        string name = names[i];
        double grade = grades[i];
        cout << name << "'s final grade is " << setprecision(3)
             << grade
             << setprecision(prec) << endl;
    }
    return 0;
}