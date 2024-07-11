#include <iostream>
using namespace std;



void hello(int* lko){
    cout<<"Num: " << lko<<endl;
    cout<<"Num: " << &lko<<endl;
    cout<<"Num: " << *lko<<endl;

}


int main(){
    int n = 3245;
    int* lko = &n; 
    hello(lko);

return 0;
}

