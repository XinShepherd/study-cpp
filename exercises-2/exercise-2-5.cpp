//
// Created by Fuxin on 2019/10/17.
//

#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

int main() {
    // square
    {
        const string::size_type length = 6;
        for (string::size_type i = 0; i < length; ++i) {
            for (string::size_type j = 0; j < length; ++j) {
                if (i == 0 || i == length - 1 || j == 0 || j == length - 1) {
                    cout << '*';
                } else {
                    cout << ' ';
                }
            }
            cout << endl;
        }
    }
    // triangle
    {
        const int length = 6;
        const int mid = length / 2;
        int left = mid, right = mid;
        for (int i = 0; i < mid; ++i) {
            for (int j = 0; j < length; ++j) {
                if (j == left || j == right || i == mid - 1) {
                    cout << '*';
                } else {
                    cout << ' ';
                }
            }
            left--;
            right++;
            cout << endl;
        }
    }

    return 0;
}