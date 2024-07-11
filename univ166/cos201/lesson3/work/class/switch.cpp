#include <iostream>

int date(){
        std::cout<<"Enter number 1 5 6 or 10: ";
        int input;
        std::cin>>input;
return input;
}
#if 0
int main(){
    
    int value = date();
    int cost = 10;
    switch(value){
            case 1:
                cost += 10;
                std::cout<<cost<<std::endl;
            case 5:
                cost += 50;
                std::cout<<cost<<std::endl;
            case 10:
                cost += 100;
                std::cout<<cost<<std::endl;
                break;`
            default:
                std::cout<<"Wrong\n";
    } 
}
#endif

int main(){
    int value = date();
    int cost = 10;
    if (value == 1){
        cost += 10;
    }
    else if (value == 5 || value == 6){
        cost+= 60;
    }
    else if (value == 10){
        cost+= 100;
    }
    else{
        cost+=40;
    }
    std::cout<<cost<<std::endl;
}
