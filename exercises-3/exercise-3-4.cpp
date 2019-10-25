//
// Created by Fuxin on 2019/10/25.
//

#include <iostream>
#include <string>

using std::cout;        using std::cin;
using std::endl;        using std::string;

int main() {
    cout << "请输入多个单次，按结束键结束: ";
    string max_str, min_str, x;
    string::size_type max = 0, min = 0;
    while (cin >> x) {
        string::size_type size = x.size();
        if (size > max) {
            max = size;
            max_str = x;
        }
        if (size < min || min == 0) {
            min = size;
            min_str = x;
        }
    }
    if (x.empty()) {
        cout << "单词数量不能为空，请重新运行程序！" << endl;
        return 1;
    }
    cout << "单词最大长度为：" << max << "，单词为：" << max_str << endl;
    cout << "单词最小长度为：" << min << "，单词为：" << min_str << endl;

    return 0;
}