#include <iostream>

int value(){
    int num[100] = {0};
    int last =0, value =0;

    std::cout<<"Enter your value: ";
    while (value != 100 && last < 1000){
        std::cin>>value;
        if (value != 100){
            num[last] = value;
        }
        last++;
    }
    std::cout<<"Numbers: ";
    for (int i= 0; i< last; i++){
        std::cout<<num[i];
    }
    return value;
}
       

int main(){
    int num1[] = {value()};
    int num2[] = {value()};
    int num = sizeof(num1);
    int n = sizeof(num2);
    std::cout<<num<<std::endl;
    std::cout<<n<<std::endl;
    } 