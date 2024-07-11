#include <iostream>

float waterPrice(){
    std::cout<<"Enter your Watar Bill: ";
    float input;
    std::cin>>input;
return input;
}

float calcu(){
    float unit = waterPrice();
    float bill = 0;

    if (unit <= 20){
        bill = unit * 15;
    }
    else if(unit <= 50){
        bill = unit * 20;
    }
    else if (unit <= 100){
        bill = unit * 25;

    }
    else {
        bill = unit * 30;

    }
    std::cout<<"Your total is "<< bill<<std::endl;
return 0;
}

int main(){
    calcu();
}