#include <iostream>

int timeInH(){
    std::cout<<"Enter your time-in hours: ";
    int hours;
    std::cin>>hours;
return hours;
}
int timeInM(){
    std::cout<<"Enter your time-in minutes: ";
    int min;
    std::cin>>min;
return min;
}
int timeOutH(){
    std::cout<<"Enter your time-out hours: ";
    int hours;
    std::cin>>hours;
return hours;
}
int timeOutM(){
    std::cout<<"Enter your time-out miutes: ";
    int min;
    std::cin>>min;
return min;
}

int main(){
    int inH = timeInH();
    int inM = timeInM();
    int outH= timeOutH();
    int outM = timeOutM();

    int inhm = inH * 60;
    int inmin = inM + inhm;
    int outhm = outH * 60;
    int outmin = outM + outhm;

    int result = outmin - inmin;
    int minet = result % 60;
    int final = result / 60;

    int four = 50;
    int money = 30;
    if(final < 3){
        std::cout<<"Its free";
    }
    else if(final < 4){
        std::cout<<"its "<< four<<std::endl;
    }
    else{
        std::cout<<"its "<< four + (final * 30);
    }
   

    std::cout<< " because you park here for: "<<final<<":"<<minet<<"minutes"<<std::endl;
}

