#include <iostream>
#include <iomanip>
using namespace std;

struct emp{
    int age;
    int sex;
    int stat;
    int exp;
};
int inp(){
    int inp;
    cout<<"Enter Your Num: ";
    cin>>inp;

return inp;
}
int main(){
    struct emp *em = new struct emp;
    int n = inp();

    for (int i = 0; i < n; i++){
        cout<<i+ 1<<" male or female: "; cin>>em->sex;
        cout<<i+1 <<" age: ";  cin>>em->age;
        cout<<i+1<<" status: "; cin>>em->stat;
        cout<<i+1<<" experien: "; cin>>em->exp;
    }
    delete[] em;

return 0;
}
