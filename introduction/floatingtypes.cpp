#include <iostream>
#include <iomanip> //for setprecision

int main(){
    float number1 {1.12345678901234567890f}; //put f to declare floats
    double number2 {1.1234567890123456789};
    long double number3 {1.12345678901234567890L};

    std::cout << std::setprecision(20); // control the precision from std::cout
    std::cout << "sizeof float :" << sizeof(number1) << std::endl;
    std::cout << "sizeof double :" << sizeof(number2) << std::endl;
    std::cout << "sizeof long double :" << sizeof(number3) << std::endl;
    
    return 0;
}