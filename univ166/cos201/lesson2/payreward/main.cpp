#include <iostream>

float rewards(){
    float lastpay, reward, years;
    std::cout<<"Last paycheck: ";
    std::cin>>lastpay;
    std::cout<<"Years of service: ";
    std::cin>>years;

    reward = (lastpay * years) / 50;
    std::cout<<":Your reward will be: "<<reward<<std::endl;
return 0;
}
int main(){
    rewards();
}