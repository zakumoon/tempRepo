#include <iostream>

#if 0
int input(){
    std::cout<<"input: ";
    int x;
    std::cin>>x;
return x;
}
int main(){
    int num = input();
    int count = 0;
    int sum;
    float ava;
    while(num != 9999){
        if (num >= 300 && num <= 500){
            sum = sum + num;
        } 
        count++;
        num = input();

    }
    ava = float(sum) / count;
    std::cout<<ava<<std::endl;
return 0;
}
#endif 


