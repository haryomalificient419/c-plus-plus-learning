#include <iostream>
#include <string>

int main(){
    std::cout << "Hello world" << std::endl;

    int age{21};
    std::cout <<"Age: "<< std::endl;

    std::cerr<< "error message: error!" <<std::endl;
    std::clog << "log message: something happened" << std::endl;

    int age1;
    std::string name;
    std::cout << "please type your name and age: " << std::1endl;
    std::cin >> name;
    std::cin >> age1;

    std::cout << "Hello " << name << "you are " << age1;
    return 0;
}