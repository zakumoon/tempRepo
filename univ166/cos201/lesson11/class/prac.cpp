#include <iostream>
#include <iomanip>
using namespace std;

/*
struct em {

    int sex;
    int age;
    int stat;
    int degr;
    int exp;

}

int main(){
   struct em *e;
    int i, j, n;
        
    printf("Num: ");
    scanf("%d ", &n;
    
    e = (struct em *)malloc(sizeof((struct em)))
    for (i = 0; i < n; i++){
        
    }
    
}
*/
struct employee {
    int sex;
    int age;
    int stat;
    int degr;
    int tyear;
};
int main( )
{
    struct employee person[150];
    int    i ;
    float avg_age,avg_expr;    
     //get data
    
        for ( i = 0 ; i < 2 ; i++ ) {
     cout << "sex = ";
              cin >> person[i].sex;
     cout << "age = ";
              cin >> person[i].age ;
     cout << "stat = ";
              cin >> person[i].stat;
     cout << "degr = ";
              cin >> person[i].degr;
     cout << "tyear = ";
              cin >> person[i].tyear;
        }
    avg_age = 0 ;   avg_expr  =  0;
    for ( i = 0 ; i < 2 ; i++ ) 
   {
           avg_age = avg_age + person[i].age ;
           avg_expr = avg_expr +  person[i].tyear ;
   }

     avg_age  = avg_age/150 ;
     avg_expr = avg_expr /150 ;

      cout << "AVG  AGE  = " <<  avg_age  << "\n" ;
      
}


