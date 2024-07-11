#include <iostream>


#if 0
int main(){
    int max = 0;
    int num;
    for (int index = 1; index < 10; index++){
        if (num[max] > num[index]){
            max = index;
        }
            float largesale = num[max];

    }
return 0;
}
int main(){
    float final;
    int num[0];
    int max = 0;

    for (int index = 0; index < 10; index++){
        if (num[max] > num[index]);
            max = index;
    
    }
    std::cout<<max<<std::endl;
return 0;
}
void main(){
    float socre[5], ava, dif, sum=0;
    int i;
    std::cin>>score[0];
    sum+= score[0];
    std::cin>>score[1];
    sum+= score[1];
    std::cin>>score[2];
    sum+= score[2];
    std::cin>>score[3];
    sum+= score[3];
    std::cin>>score[4];
    sum+= score[4];

    ava = sum / 5;

    std::cout<<ava<<std::endl;
}
void main(){
    float score[5], ava, dif, sum=0;
    int i;
    for (i = 0; i<5; i++){
        std::cin>>score[i];
        sum+= score[i];
    }
    ava = sum/5;
    std::cout<<ava<<std::endl;
    for (i = 0; i<5; i++){
        dif = socre[i]-ava;
        std::cout<<dif<<std::endl;
    }
}

int main( )
{
    int data1[ 2 ] [ 5 ] = {
       { 1 , 2 , 3 , 4 , 5 } ,
       { 6 , 7 , 8 , 9 , 10 }
    } ;
   int sum ,  i , j, a, b ;

  for ( j = 0 , sum = 0 ; j < 2 ; j++ )  
  {
     for ( i = 0 ; i < 5 ; i++ )
     {
         	sum += data1 [ j ][ i ] ; //sum = sum + data1 [ j ][ i ]
     }
     
     //
    for (j = 0; j < 2; j++){
    int sumrow = 0;
    for (i = 0; i < 5; i++){
        sumrow += data1[j][i];
    }
    cout<<sumrow<<endl;
   }
     
   }
   

   cout << "Sum: "<<sum << std::endl ;



}
#endif

int main(){
    int ic[10] = {0};
    int pay[10] = {0};
    int net[10] = {0};

    for (int i = 0; i < 10; i++){
        std::cout<<i <<" Income: ";
        std::cin>>ic[i];
        std::cout<<i <<" Pay: ";
        std::cin>>pay[i];
            net[i] = ic[i] -  pay[i];

                std::cout<<"Person "<<i << " = " <<net[i]<<std::endl;

    }
    return 0;
}

