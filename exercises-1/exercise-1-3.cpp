//
// Created by Fuxin on 2019/10/17.
//

#include <string>
#include <iostream>

int main() {
    {
        const std::string s = "a string";
        std::cout << s << std::endl;

        { const std::string s = "another string";
//            std::cout << s << std::endl; }}
            std::cout << s << std::endl; };}
    {
        const std::string s = "another string";
        std::cout << s << std::endl;
    }
    return 0;
}
