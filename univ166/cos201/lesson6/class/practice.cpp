#include <iostream>
using namespace std;

struct TEACHER
{
    int sex;
    int age;
    int status;
    int degree;
    int tyear;

};

int main(){
    struct TEACHER teach[5];
    float avgAge, avgExp;
    for (int i = 0; i< 5; i++){
        cout<<"Teacher NO: " <<i<<endl;
        for (int j = i; j< 1; j++){
            cout<<"enter your sex: ";
            cin >>teach[j].sex;
            cout<<"enter your age: ";
            cin >>teach[j].age;
            cout<<"enter your status: ";
            cin >>teach[j].status;
            cout<<"enter your degree: ";
            cin >> teach[j].degree;
            cout<<"enter your : ";
            cin >>teach[j].tyear;

        for (int i = 0; i < 2; i++){
            avgAge += teach[j].age;
            avgExp += teach[j].tyear;
        }
    }
    
        }
    avgAge /=5;
    avgExp /= 5; 

    cout<<"avarage age: "<<avgAge<<endl;
    cout<<"avarage exp: "<<avgExp<<endl;

return 0;

}
