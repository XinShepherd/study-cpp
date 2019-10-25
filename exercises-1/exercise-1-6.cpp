//
// Created by Fuxin on 2019/10/17.
//

#include <string>
#include <iostream>

int main() {
    std::cout << "What's your name?";
    std::string name;
    std::cin >> name;
    std::cout << "Hello, " << name << "!"
              << std::endl << "And what's yours ?";
    std::cin >> name;
    std::cout << "Hello, " << name << "!"
    << "Nice to meet you!" << std::endl;
    return 0;
}