#include <iostream>

const int amount {45};
const int space {25};

int main(){
    int num {24};
    int tool {amount};
    switch (tool){
        case space : {
            std::cout << "SPACE" << std::endl;
        }
        break;

        case  amount : {
            std::cout << "AMOUNT " << amount << std::endl;
        }
        break;

        default :{
            std::cout<<"nothing"<<std::endl;
        }
        break;
    }
    if (num > 23){
        std::cout << "true " << std::boolalpha << (num > 23) << std::endl;
    }
    return 0;
}