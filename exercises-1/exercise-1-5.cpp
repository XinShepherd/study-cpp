//
// Created by Fuxin on 2019/10/17.
//

#include <string>
#include <iostream>

int main() {
    {
        std::string s = "a string";
        {
            std::string x = s + ", really";
            std::cout << s << std::endl;
        }
        std::cout << x << std::cout; // x is out of its scope here
    }
    return 0;
}
