#include "learn.h"
#include <iostream>
int num(){
    std::cout<<"Put your numbers: ";
    int input;
    std::cin>>input;

return input;

}
int mul(){
    int get1{num()};
    int get2{num()};
    int get3{num()};
    
    if(get3 > get2 && get3 >get1){
        std::cout<<"last number is max value: "<< get3<<std::endl;
    }
    else if(get2 > get3 && get2 > get1){
        std::cout<<"Second number is max value: "<< get2<<std::endl;
    }
    else if (get1>get2 && get1> get3){
        std::cout<<"First number is max value: "<<get1<<std::endl;
    }
    else{
        std::cout<<"Error"<<std::endl;
    }
return 0;
}


