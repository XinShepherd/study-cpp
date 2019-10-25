//
// Created by Fuxin on 2019/10/24.
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
    cout << "Please enter your first name: ";
    string name;
    cin >> name;
    cout << "Hello, " << name << "!" << endl;
    // 期中和期末
    cout << "Please enter your midterm and final score: ";
    double midterm, final;
    cin >> midterm >> final;

    // 家庭作业成绩
    cout << "Please enter your homework scores: ";
    double x;
    vector<double> homework;
    while (cin >> x) {
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
    // 输出并计算总成绩
    streamsize prec = cout.precision();
    cout << "Your final grade is " << setprecision(3)
         << 0.2 * midterm + 0.4 * final + 0.4 * median
         << setprecision(prec) << endl;

    return 0;
}
