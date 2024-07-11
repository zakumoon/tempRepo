#include <iostream>
#include<cstdlib>
int main(){

// Providing a seed value
srand((unsigned) time(NULL));
// Get a random number
int key = rand() % 100;

int count = 0;
int guess = -1;
    while (guess != key){
        std::cout<<"Enter your guess: "; std::cin>>guess;
        if (guess > key){
            std::cout<<"Less then "<< guess<<std::endl;
        }
        else if (guess < key){
            std::cout<<"Greater then "<<guess<<std::endl;
        }
        count++;
    }
    std::cout<<"Your correct its "<<guess<<std::endl;
    std::cout<<"Times it takes "<<count<<std::endl;
    return 0;
}