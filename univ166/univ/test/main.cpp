#include <iostream>
#if 0
int main(){

    int num1, num2, freq, final;
    std::cout<<"Enter your First Num: "<<std::endl;
    std::cin>>num1<<std::endl;

    std::cout<<"Enter your Second Num: "<<std::endl;
    std::cin>>num2<<std::endl;

    switch(num1);


}

# endif
#include<cstdlib>
using namespace std;
int main( )
{
    int num[100]={ 2, 3, 50, 4, 3, 50, 3, 2, 11,68,68 }; //num
    int n= 11;          
    cout << "get n = ";  // cin >> n;
    int countflg[100]={0};      //countflg is array of 100 and currently hold value of 0
    int freqv[100]={-1};        // 
    int freqcnt[100]={-1};      // while freqcnt hold first value -1
    int i , j , k;              // loop
    for( k =i=0; i < n ; i++)   // while k and i hold value of 0 but it only loopfor i since i < n and i++ 
    {
        if( countflg[i]==0) {       // if countflg of loop i is == to 0
            freqv[ k ]= num[i];     //update freqv of k to num[i]
            freqcnt[k] = 1;         // update frequent to 1
            countflg[i] = 1;        //and countflg to also 1
            for( j=i+1 ; j < n ; j++) {    //j is i+1 while its less then n then j++
                if( freqv[ k ] == num[j] && countflg[j]==0 ) {      
                    countflg[j] = 1;
                    freqcnt[ k ] += 1;        
                }
            }       
            k++;
        }
    }
 
   for(i = 0; i < k  ; i++ ) {
       cout << "\n v = "   << freqv[i] << ",  freq = " << freqcnt[i] ;
    }
    return 0;
}