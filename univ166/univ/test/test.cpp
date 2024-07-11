#include <iostream>
using namespace std;

int main(){
    int data[2][5]= {
    { 1 , 2 , 3 , 4 , 5 } ,
    { 6 , 7 , 8 , 9 , 19 }
    } ;
    int sum = 0, i, j,avg, count = 0;

    //find sum
    for (i = 0; i < 2; i++){
        for (j =0; j<5; j++){
            sum = sum + data[i][j];
                    count++;
        }  
        avg = sum / count;
    }
    cout<<"sum: "<<sum<<endl;
    cout<<"avarage: "<<avg<<endl;



    //large sum & position
    int rmax= 0, cmax=0;
    int lsum = data[0][0];
    for (i = 0; i< 2; i++){
        for (j= 0; j < 5; j++ ){
            if (lsum < data[i][j]){
                lsum = data[i][j];
                rmax = i;
                cmax = j;
            }
        }
        
    }
    cout<<"lsum: "<<lsum<<endl;
    cout<<"imax in : "<<rmax<<" " << cmax<<endl;


    //small sum & position
    int rmin = 0, cmin=0;
    int nsum = data[0][0];
    for (i=0; i<2; i++){
        for (j=0; j<5; j++){
            if (nsum > data[i][j]){
                nsum = data[i][j];
                rmin = i;
                cmin = j;
            }
        }
    }

    cout<<"nsum: "<<nsum<<endl;
    cout<<"imin in : "<<rmin<<" " << cmin<<endl;

}