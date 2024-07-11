#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;
#include <ctype.h>

/*
int main()
{
 char c[10];
 cout<<"input: ";cin>>c;
 int isalp = 0;
 int isup = 0;
 int isdown = 0;
 int isnum = 0;
 int unknown = 0;
 

for (int i = 0; i < strlen(c); i++ ){
  if(isalpha(c[i])){
    isalp++;
    if(isupper(c[i])){
      isup++;
      if(islower(c[i])){
        isdown++;
        if(isdigit(c[i])){
          isnum++;
        }
        else{
          unknown++;
        }
      }
    }
  }
  

}
cout << isalp << " is an alpabet leter\n";
  cout << isup << " is an upper leter\n";
  cout << isdown << " is an lower leter\n";
  cout << isnum << " is an num leter\n";
  cout <<  unknown<< " is an unknown leter\n";
return 0;

}
*/

void GetInput(char m[], int x[3][3]) {
    cout << "matrix " << m;
    for( int i = 0 ; i< 3 ; i++) {
        for( int j = 0 ; j< 3 ; j++) {
            cout << m << "[" << i << "][" <<j <<"] ="; 
            //cin >> x[i][j];
            x[i][j] = rand()%7;
            cout << x[i][j] << "\n";
        }
    }
    
}
void Mul( int a[3][3],int b[3][3],int c[3][3] ) {
    for(int i = 0 ; i < 3 ; i++) {

        for(int j = 0 ; j < 3 ; j++) {
            int sum = 0;
            for(int k=0; k < 3 ; k++) {
                sum = sum + a[i][k]*b[k][j];
            }
            c[i][j]  = sum;
        }
    }
}
void Show( char m[], int c[3][3]) {
    cout << m << "\n";
      for( int i = 0 ; i< 3 ; i++) {
        for( int j = 0 ; j< 3 ; j++) {
              
            cout << setw(5)<<c[i][j];

           // cout << "x[" << i << "][" <<j <<"] ="; 
        }
        cout << "\n";
    }
}
int main()
{
    int A[3][3],B[3][3],C[3][3];
    GetInput("A", A );
    GetInput("B", B);
    Mul( A, B, C );
 
    Show( "A",A);
    
     Show("B",B);
    
    Show("C",C);
    
    return 0;
}