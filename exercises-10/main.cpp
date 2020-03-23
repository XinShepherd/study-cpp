//
// Created by Fuxin on 2020/3/18.
//

#include <iostream>

using std::cout; using std::endl;
using std::string;


void example1() {
    int x = 5;
    int *p = &x;
    cout << "x=" << x << endl;
    *p = 6;
    cout << "x=" << x << endl;
}

string letter_grade(double grade) {
    static const double numbers[] = {
            97, 94, 90, 87, 84, 80, 77, 74, 70, 60, 0
    };

    static const char* const letters[] = {
            "A+", "A", "A-", "B+", "B", "B-", "C+", "C", "C-", "D", "F"
    };

    const size_t n = sizeof(numbers) / sizeof(*numbers);
    for (int i = 0; i < n; ++i) {
        if (grade > numbers[i]) {
            return letters[i];
        }
    }
    return "?\?\?";
}

void example2() {
    cout << "99 -> " << letter_grade(99) << endl;
}

int main(int argc, char** argv) {
    example1();
    example2();

    if (argc > 1) {
        for (int i = 1; i < argc - 1; ++i) {
            cout << argv[i] << " ";
        }

        cout << argv[argc - 1] << endl;
    }

    int *p = new int(42);
    cout << "*p = " << *p << endl;
    cout << "p = " << p << endl;
    cout << "&p = " << &p << endl;

    return 0;
}
