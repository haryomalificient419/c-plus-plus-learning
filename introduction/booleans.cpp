#include <iostream>

int main(){
    bool red_light {false};
    std::cout << std::boolalpha; //used to show actual value of a boolean variable
    std::cout << red_light << std::endl; //0 means false and 1 means true
    std::cout << sizeof(red_light) << " " << sizeof(bool) << std::endl; // 1 byte
    return 0;
}