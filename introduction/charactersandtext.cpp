#include <iostream>

int main(){
    char character1 {'e'};

    char value = 65; // ASCII character code for 'A'

    std::cout << character1 << std::endl;
    std::cout << "value: " << 31/3 << std::endl; // A
    std::cout << "value(int): " << static_cast<int>(value) << std::endl;
    
    //auto
    //auto is a type guesser
    auto var {12};
    auto var2{13.0};
    auto var3 {123u}; // unsigned
    auto var4 {123ul}; //unsigned long
    auto var5{123ll}; //long long
    //DOnt change auto values // get compiller error!
    return 0;
}