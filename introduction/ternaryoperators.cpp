#include <iostream>

int main(){
    /*if(condition){
        result = opt1;
    }else{
        result = opt2;
    }
    is equivalent to the below logically
    */
    int max{3}; int a{35}; int b{20};
    std::cout<<std::endl;
    std::cout<<"using regular if" << std::endl;
    max=(a > b)?a:b; //if a > b max = a else max = b.
    return 0;
}