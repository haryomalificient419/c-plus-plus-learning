#include <iostream>

int main(){
    int value1 {20};
    int value2{-200};

    std::cout << "value1 :" << value1 << std::endl;
    std::cout << "value2 :" << value2 << std::endl;
    std::cout << "sizeof(value1) :" << sizeof(value1) << std::endl;
    std::cout << "sizeof(value2) :" << sizeof(value1) << std::endl;

    unsigned int value3 {4}; // only positive numbers

    unsigned long long int value4 {44};
    signed short int value5 {-456};

    std::cout << "sizeof(value4) :" << sizeof(value4) << std::endl;


    return 0;
}