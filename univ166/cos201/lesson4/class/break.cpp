#include <iostream>

int main(){
    int number;
    int sum = 0;

    for (int i =1; i <= 3; i++){
        for (int j = 1; j<=3; j++){
            if (j == 2){
                continue;
            }
            std::cout<<"i: "<<i<<" j: "<<j<<std::endl;
        }
    }
return 0;
}