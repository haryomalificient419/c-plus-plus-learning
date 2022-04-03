#include <iostream>
#include <string>

int main(){
    std::cout << "Your name please: ";
    std::string firstname;
    std::cin >> firstname;
    std::cout << "Hello, " << firstname << "!" << std::endl;

    std::cout << "Enter your name: ";
    std::string name;
    std::cin >> name;
    
    const std::string greeting = "Hello,"+name+"!";
    const std::string spaces(greeting.size(), ' ');
    const std::string second = "* "+spaces+" *";
    const std::string first(second.size(), '*');
    //write it all
    std::cout << std::endl;
    std::cout << first << std::endl;
    std::cout << second << std::endl;
    std::cout << "* "<< greeting << " *" << std::endl;
    std::cout << second << std::endl;
    std::cout << first << std::endl;

    return 0;
}