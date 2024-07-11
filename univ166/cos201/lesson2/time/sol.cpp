#include "head.h"
#include <iostream>

int recieve(){
    std::cout<<"Enter your Min Input: ";
    int take;
    std::cin>>take;
return take;

}
int convert(){
    int input = recieve();
    int days, hours, sec, six;
    six = 60;
    hours = input / six;
    days = (input / six) / 24; 
    sec = input * six;

    std::cout<<"Days: "<< days<<std::endl;
    std::cout<<"Hours: "<< hours<<std::endl;
    std::cout<<"Seconds: "<< sec<<std::endl;

return 0;
}

