#include <iostream>

int addNumbers(int first_number, int second_number){
    int sum = first_number + second_number;
    return sum;
}

int main(int argc, char **argv){
    int firstNumber = 12;
    int secondNumber = 9;

    int sum = firstNumber + secondNumber;

    sum = addNumbers(firstNumber, secondNumber);

    sum = addNumbers(20, 8);

    std::cout << "The sum of two numbers is : " << sum << std::endl;
    std::cout << "The sum of two numbers is  : " << addNumbers(23, 9) << std::endl;
    return 0;
}