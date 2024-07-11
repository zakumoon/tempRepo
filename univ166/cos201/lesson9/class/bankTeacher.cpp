
#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

struct person {
  char id[5];
  char name[30];
  char addrs[50];
  float deposit;
};
int displaymenu()
{
    int choice;
    do {
    cout << "1.open acc" << endl;
    cout << "2.deposit acc" << endl;
    cout << "3.widthdraw acc" << endl;
    cout << "4.compond interest acc" << endl;
    cout << "5.reports " << endl;
    cout << "6.quit" << endl;
    cin >> choice;
    }while( (choice >=1 && choice << 5) == false );
    return choice;
}

int checkaccExist(char id[5],int n,struct person p[])
{ //0..n-1 found,-1=not found
    for(int i=0; i< n ; i++) {
        if( strcmp( id, p[i].id)==0) {
            return i;
        }
    }
    return -1;
}
int opennewacc(char id[5],
   float deposit,char name[], char addrs[],
   int &n,struct person p[])
{
     int res = checkaccExist(id,n,p); //0..n-1 found,-1=not found
    if( res >=0) {
        return 0;
    }
    /*
struct person {
  char id[5];
  char name[30];
  char addrs[50];
  float deposit;
}    
    */
    strcpy( p[n].id, id );
    strcpy( p[n].name, name );
    strcpy( p[n].addrs, addrs );
    p[n].deposit = deposit;
    n++;
    return 1;
//1 success
//0 not success
}
int deposit(char id[5],float m,int n,struct person p[]) {
//1 success
//0 not success
    int idex = checkaccExist(id,n,p); //0..n-1 found,-1=not found
    if( idex < 0) {
        return 0;
    }
    p[idex].deposit += m;
return 0;
}

int widthdraw(char id[5],float m,int n,struct person p[]) {
//1 success
//0 not success
    int idex = checkaccExist(id,n,p); //0..n-1 found,-1=not found
    if( idex < 0) {
        return 0;
    }
    if(p[idex].deposit -m < 100 ) {
        return 0;
    }
    p[idex].deposit -= m;
    return 1;
}
void compondinterest( float rate,int n,struct person p[]) {
}

void report(  int n,struct person p[]) {
    for(int i = 0; i < n ; i++) {
        cout << "id : " << setw(10) ; 
        cout << p[i].id << setw(10) ;
        cout << "name : " << setw(10) ;
        cout << p[i].name << setw(10) ;
        cout << "addrs : " << setw(10) ;
        cout << p[i].addrs << setw(10) ;
        cout << "deposit : " << setw(10) ;
        cout << p[i].deposit<< setw(10) ;
        cout << endl;
    }
}


int main()
{
    struct person customer[500];
    int n=0;                //count
    int choice;             //choice
    char id[5];             //id or key
    float _deposit,_widthdraw;  //money 
    char name[100];         //entering name
    char addrs[100];           //address
    int res;                    //hold the property of struct person
    choice = displaymenu();     //call choice here before while loop
    while(choice!=6) {          
        switch(choice){ 
            case 1: 
            /*
int opennewacc(char id[5],
   float deposit,char name[], char addrs[]
   int &n,struct person p[])                
            */                          //if user id, name, add 
                    cout << "id : ";       //are same then it will 
                    cin >> id;              //show error
                    cout << "name : "; 
                    cin >> name;
                    cout << "addrs : "; 
                    cin >> addrs;
                    cout << "deposit : "; 
                    cin >> _deposit;
                    res =opennewacc(id,
                            _deposit,
                            name,  
                            addrs,
                            n,
                           customer);
                    if(res==0) {
                        cout << "accout duplicate error" << endl;
                    }
                    break;
            case 2:
            /*
            int deposit(char id[5],float m,int n,struct person p[])
            */
                    cout << "id : "; 
                    cin >> id;    
                    cout << "deposit : "; 
                    cin >> _deposit;                    
                    res = deposit(id,_deposit,n,customer);
                    
                    break;
            case 3:
            /*
            int widthdraw(char id[5],float m,int n,struct person p[])
            */
                    cout << "id : "; 
                    cin >> id;    
                    cout << "widthdraw : "; 
                    cin >> _widthdraw;                    
                    res = widthdraw(id,_widthdraw,n,customer);
                    break;
            case 4:
                    break;
                    
            case 5:
                    report( n,customer );
                    break;
        }
        choice = displaymenu();
    }

    return 0;
}
