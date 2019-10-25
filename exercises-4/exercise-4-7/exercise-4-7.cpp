//
// Created by Fuxin on 2019/10/25.
//
#include <iostream>
#include <vector>

using std::cout;        using std::cin;
using std::endl;        using std::vector;

int main() {
    vector<double> numbers;
    double num;
    cout << "Please enter some numbers: ";
    while (cin >> num) {
        numbers.push_back(num);
    }
    typedef vector<double>::size_type vec_sz;
    vec_sz size = numbers.size();
    if (size == 0) {
        cout << "Empty numbers. Please try again." << endl;
        return 1;
    }
    double sum = 0;
    for (vec_sz i = 0; i < size; ++i) {
        sum += numbers[i];
    }
    cout << "Avg: " << "\t" << sum / size << endl;
    return 0;
}