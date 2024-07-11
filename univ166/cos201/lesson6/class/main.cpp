#include <iostream>
//#pragma pack(push, 1)
#include <string.h>

using namespace std;

struct PERSON {
   int      age;         
   long    tell;
   float    weight;
   char    name[10];
} ;
 
struct DEPARTMENT {
    int Dep_no;  
    char DepNm[ 80 ] ;
} ; 


int main()
{
    struct PERSON   dang , pin , tip ;  /* variable */
    struct PERSON   ary_dang[ 5 ] ;      /* array */
    
    struct DEPARTMENT  var_science ;   /*variable */
    struct DEPARTMENT  ary_science[ 50 ] ;  /* array */


    dang.age = 50;
    strcpy( dang.name , "dang");
    cout << "dang.age =" << dang.age << endl;
    cout << "dang.name =" <<dang.name << endl;
    
    cout << "sizeof(dang.age)=" <<sizeof(dang.age) << endl;
    cout << "sizeof(dang.name) =" <<sizeof(dang.name) << endl;

    cout << "sizeof(dang) =" <<sizeof(dang) << endl;
    cout << "sizeof(ary_dang) =" <<sizeof(ary_dang) << endl;

    cout << "sizeof(var_science) =" <<sizeof(var_science) << endl;
    cout << "sizeof(ary_science[ 50 ]) =" <<sizeof(ary_science) << endl;

    cout << "sizeof(struct PERSON) =" <<sizeof(struct PERSON) << endl;
    cout << "sizeof(struct DEPARTMENT) =" <<sizeof(struct DEPARTMENT) << endl;

    return 0;
}