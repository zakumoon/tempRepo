#include <iostream>
#include <ctime>
using namespace std;
#if 0
#include <iostream>

int main(){
    int num[100];
    int n;
    std::cout<<"Get n: ";
    std::cin>>n;

    srand((unsigned)time(NULL));
    for (int i = 0; i<n; i++){
        num[i]=rand()%1000;
        std::cout<<num[i]<<" , ";
    }
    int max = 0;

    for (int index = 0; index < n; index++){
        if (num[max] > num[index]);
            max = index;
    
    }
    std::cout<<max<<std::endl;
return 0;
}
#endif


int main( )
{
    int num[100]={ 2, 3, 50, 4, 3, 50, 3, 2, 11,68,68 };
    int n= 11;
    cout << "get n = ";  // cin >> n;
    int countflg[100]={0};
    int freqv[100]={-1};
    int freqcnt[100]={-1};
    int i , j , k;
    for( k =i=0; i < n ; i++)
    {
        if( countflg[i]==0) {
            freqv[ k ]= num[i]; 
            freqcnt[k] = 1;
            countflg[i] = 1;
            for( j=i+1 ; j < n ; j++) {
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
