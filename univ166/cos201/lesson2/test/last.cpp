#include "last.h"
#include <iostream>

float getInput(){
    std::cout<<"Enter Your Number: ";
    float input;
    std::cin>>input;
return input;
}
//get celcius to ferenhite
float getFerenhite(){
    float celcius, ferenhite;
    celcius = getInput();

    ferenhite = celcius * 1.8 + 32;
    return ferenhite;
}

//get ferenhite to celcius
float getCelcius(){
    float ferenhite, celcius;
    ferenhite = getInput();
    celcius = (ferenhite - 32) * 5/9;
    
    return celcius;
}
//get depth idk what this is i did what i was told
float depth(){
    float cel, dep;
    dep = getInput();

    cel = (10 * dep) + 20;
    
    return cel;
}

//store recipt 
float getDiscount(){
    float price = getInput();
    float discount;

    discount = (5 / price ) * 100;
    
    return discount;

}
float getVat(){
    float price = getInput();
    float vat;
    vat = (7 / price) * 100;

    return vat;
}
float getTotal(){
    float discount = getDiscount();
    float vat = getVat();
    float price = getInput();

    float total = price -(discount + vat);
return total;

}

//triangle
float triangle(){
    float core, height, pi, total;
    std::cout<<"Input Core: ";
    std::cin>>core;
    std::cout<<"Input Height: ";
    std::cin>>height;

    pi = 3.1416;
    total = (1.0/3.0) * pi * (core * core) * height;
    std::cout<<total<<std::endl;
return 0;

}



