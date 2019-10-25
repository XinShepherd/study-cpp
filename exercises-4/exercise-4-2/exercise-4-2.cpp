//
// Created by Fuxin on 2019/10/25.
//

#include <iostream>
#include <iomanip>

using std::cout;        using std::cin;
using std::endl;        using std::max;
using std::setw;        using std::string;

int getNumberLength(int num) {
    int len = 0;
    while ((num = num / 10) > 0) {
        len++;
    }
    return len;
}

int main() {
    int max = 100;
    int maxlen = getNumberLength(max) ;
    int max_square_len = getNumberLength(max * max);
    for (int i = 1; i <= max; ++i) {
        cout << setw(maxlen + 1) << i << " " << setw(max_square_len) << i * i << endl;
    }
    return 0;
}
