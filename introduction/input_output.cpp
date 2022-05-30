#include <iostream>
#include <string>

int main(){
    std::cout << "Hello world" << std::endl;

    int age{21};
    std::cout <<"Age: "<< std::endl;

    std::cerr<< "error message: error!" <<std::endl;
    std::clog << "log message: something happened" << std::endl;
    /*
    int age1;
    std::string name;
    std::cout << "please type your name and age: " << std::endl;
    std::cin >> name >> age1;

    std::cout << "Hello " << name << ", you are " << age1;
    */

    std::string full_name;
    int age2;
    std::cout << "what is your name and your age? " << std::endl;
    //fixing the space problem
    std::getline(std::cin, full_name);
    std::cin >>age2;
    std::cout << "Hello " << full_name << ",you are " << age2 << std::endl;

    return 0;
}