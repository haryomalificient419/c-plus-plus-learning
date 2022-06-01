#include <iostream>

int main(){
    //curly braces initializers
    
    int snake;//variable may contain random garbage value. WARNING!
    int lion_count{}; //initializes to zero
    int dog_count {10};

    int animals {lion_count + dog_count};

    //int narrow_conversions {2.9};// Throws ERROR!

    int info_lost (2.9); //info lost

    std::cout << "animals: " << animals << std::endl;
    std::cout << "info lost: " << info_lost << std::endl;

    //check the size with sizeof
    std::cout << "size of int : " << sizeof(int) << std::endl;
    std::cout << "size of animals in bytes " << sizeof(animals) << std::endl;

    return 0;
}