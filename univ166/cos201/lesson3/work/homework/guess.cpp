#include <iostream>

int main(){
    int key = 69;
    int cout = 0;
    int guess;

    while (guess != key){
        std::cout<<"Enter your guess: ";
        std::cin>>guess;

        if (guess > key){
            std::cout<<"key is less then "<< guess<<std::endl;
        }
        else if (guess < key){
            std::cout<<"key is more then "<< guess<<std::endl;
            
        }
        cout++;
    }
        std::cout<<"key is "<<guess<<std::endl;
        std::cout<<"You guessed "<<cout<<" times!"<<'\n';
return 0;
}