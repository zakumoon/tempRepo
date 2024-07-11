#include <iostream>

int main(){
    srand((unsigned) time(NULL));
    
    int num[99] = { 0};
    int random, count;
    int freq[99] = {0};
    int fcount[99] = {-1}
    int max= num[0], min= num[0];   //declare variable with position


    for (int i = 0; i < 100; i++ ){
        random = rand() % 1000;
        num[i] = random;
        if(freq[i] != 1){
            count =1;
            for (int j = 0; j<99; j++){
                if (num[j] == num[i] && cout[j] ==){
                    count++;
                    freq[j] = 1;

                    
                    }
            }
            
            
            std::cout<<num[i]<<" appears "<<count<<" times "<<std::endl;
            std::cout<<"max: "<<max<<std::endl;
            std::cout<<"min: "<<min<<std::endl;



        }

    }
return 0;


}