#include <iostream>

int inp(){
    std::cout<<"Enter pack weight: ";
    int input;
    std::cin>>input;

return input;
}
int iz(){
    std::cout<<"Enter your zone: ";
    int input;
    std::cin>>input;

return input;
}
int main(){
    float weight = inp();
    int zone = iz();
    int sum;
    float r;
    if (zone == 1){
        r = 0.5;
    }
    else if (zone ==2 ){
        r = 0.75;
    }
    else if (zone ==3){
        r = 1.05;
    }
    else if(zone == 4){
        r= 1.40;
    }
    else if (zone == 5){
        r= 1.70;
    }
    else{
        std::cout<<"unknown";
    }
    sum = weight * r;
    std::cout<<"Price: "<<sum<<std::endl;
    
return 0;
}