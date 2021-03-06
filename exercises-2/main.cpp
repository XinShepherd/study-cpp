//
// Created by Fuxin on 2019/10/17.
//

#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main(){
    cout << "Please enter your name: ";
    string name;
    cin >> name;
    string greeting = "Hello, " + name + "!";
    cout << endl;
    const int pad = 1;
    const int rows = pad * 2 + 3;
    const string::size_type cols = greeting.size() + pad * 2 + 2;

    for (int r = 0; r < rows; ++r) {
        string::size_type c = 0;
        while (c < cols) {
            if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1) {
                cout << '*';
                c++;
            } else {
                if (c == pad + 1 && r == pad + 1) {
                    cout << greeting;
                    c += greeting.size();
                } else {
                    cout << ' ';
                    c++;
                }
            }
        }
        cout << endl;
    }

    return 0;
}