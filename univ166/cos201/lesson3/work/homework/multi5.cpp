#include <iostream>
#include <math.h>
int main(){
    int num = 5;
    for (int i = 1; i<= num; i++){
        int rise2 = pow(i, 2);
        int rise4 = pow(i, 4);
        std::cout<<"rise of 2: "<<rise2<<std::endl;
        std::cout<<"rise of 4: "<<rise4<<std::endl;
    }
return 0;
}