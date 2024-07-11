#include <iostream>
#include <iomanip>

using namespace std;

struct emp
{
    int sex;
    int age;
    int stat;
    int deg;
    int exp;
};

int input(){
    int a;
    cout<<"Teacher: ";
    cin>>a;
return a;
}


int main(){
    struct emp cd*em= new emp;
    int n=input();
    int ag = 0, ex = 0, avgage, avgexp;

    for (int i = 0; i < n; i++){
        cout<<endl;
        cout<<"Teacher "<<i<<endl;
        cout<<"1 = male & 2 = female: "; cin>>em->sex;
        cout<<"Your age: "; cin>>em->age;
        cout<<"1 = Single & 2 = Married OR more: "; cin>>em->stat;
        cout<<"Your Experience: ";  cin>>em->exp;
        ag = em->age;
        ex = em->exp;

    }
    avgage = ag / n;
    avgexp = ex / n;

    
    cout<<"Avarage age of "<<n<<" people is"<<avgage<<endl;
    cout<<"Avarage exp of "<<n<<" people is"<<avgexp<<endl;
    
    delete[] em;

    
return 0;
}
