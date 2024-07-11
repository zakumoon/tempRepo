#include <iostream>

int pays(){
    std::cout<<" Enter you monthly pay: ";
    int input;
    std::cin>>input;

    return input;
}

int main(){
    int pay = pays();

    if (pay >= 10000){
        pay = pay + (pay * 10) / 100;
    }
    else{
        pay = pay + (pay * 5) / 100;
    }
    std::cout<<" Your monthly pay with bonus is "<< pay<<std::endl;
    return 0;
}