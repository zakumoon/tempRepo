#include <iostream>

int main(){

    srand((unsigned)time(NULL));    //seed for random num generator
    int num[50]= {0};                //telling that our 50 number have value of 0
    int sum = 0, imax =0, imin = 0; //declare variable
    int max= num[0], min= num[0];   //declare variable with position
    float avg;                      //avarage

    for (int i = 0; i < 50; i++){   //loop until i = 50
        int random = rand()% 50;    //generate random num

        num[i] = random;            //num of loop i assign to value of random
        sum += num[i];              //sum = sum + num in i

        if (max < num[i]){          // if our max have less then num in loop i
            max = num[i];           // update value of max into num in loop i
            imax = i;               // imax or position of max is stored here

        }
        else{                       // if not
            min = num[i];           //update value of min to num in loop value  
            imin = i ;              // position or imin of value min is stored in here
    
        avg = float(sum) / (i +1);  //calculate average suing total sum and devided by i + 1 (if its only i then i would be 49 so i have to +1)
        }
        std::cout<< i << " = "<<num[i]<<std::endl;      //cout


    }
    std::cout<<std::endl;                               //cout   
    std::cout<<"Max: "<<max<<std::endl;                 //cout
    std::cout<<"Max Potition: "<<imax<<std::endl;       //cout
    std::cout<<"Min: "<<min<<std::endl;                 //cout
    std::cout<<"Min Position: "<<imin<<std::endl;       //cout
    std::cout<<"Sum: "<<sum<<std::endl;                 //cout
    std::cout<<"avarage: "<<avg<<std::endl;             //cout

return 0;

}
