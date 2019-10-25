//
// Created by Fuxin on 2019/10/17.
//

#include <string>
#include <iostream>

int main(){
    const std::string hello = "hello";
    const std::string message = hello + ", world" + "!";
    std::cout << message;

    const std::string exclam = "!";
    // 下面这个无效
//    const std::string message2 = "hello" + ", world" + exclam;
    return 0;
}
