#include <iostream>
#include <iomanip>
#include <string.h>
#include <cstdint>
using namespace std;

#if 0
int main(){
    int my_num = 7;
    {
        int new_num = 10;
        int my_num = 17;
        printf("1.newNUM IS %d\n", new_num);
        printf("2.myNUM IS %d\n", my_num);
    }
    printf("3.newNUM IS %d\n", my_num);
    {
        int new_num;
        my_num = 7*2;
        printf("4.newNUM IS %d\n", new_num);
        printf("5.newNUM IS %d\n", my_num);
    }
        printf("6.newNUM IS %d\n", my_num);
    
return 0;

    }

int g =0 ;
void f1() {
    int f1_num;
    g++;
    printf("1. f1_g is %d\n",g);  
    printf("2. f1_num is %d\n",f1_num);
    f1_num++;
}

void f2() {
    g += 10;
    printf("3. f2_g is %d\n",g);  
}

void f3() {
    int g = 100;
    printf("4. f3_g is %d\n",g);  
}
int main() 
{
    printf("5. main_g is %d\n",g);  
    f1();     
    printf("6. main_g is %d\n",g);  
    f2();     
    printf("7. main_g is %d\n",g);  
    f3();     
    printf("8. main_g is %d\n",g);  
    f1(); 
    printf("9. main_g is %d\n",g);  
 }

struct product {
   char id[10];
   char name[30];
   float cost;
   int instock;
};

struct product  getNewProduct() {
  struct product p;
  cout << "New product: " << endl;
  cout << "id =? ";  cin >> p.id;
  cout << "name=? "; cin >> p.name; 
  cout << "cost=? "; cin >> p.cost;
  cout << "instock=? "; cin >> p.instock;
  return p;	
}
int main() {
   struct product newProduct = getNewProduct();
  cout<<setw(3)<<"Cout"<<endl;
  cout<<"id: "<<newProduct.id<<endl;
  cout<<"name: "<<newProduct.name<<endl;
  cout<<"cost: "<<newProduct.cost<<endl;
  cout<<"instrock: "<<newProduct.instock<<endl;

} 

void odd(){
    for (int i = 0; i < 30; i+= 2){
        cout<<i<<' ';
    }
    cout<<endl;
}
void even(){
    for (int i = 1; i < 30; i+= 2){
        cout<<i<< ' ';
    }
    cout<<endl;
}
void lol(){
    for (int i = 1; i < 30; i++){
        cout<<i<< ' ';
    }
    cout<<endl;
}
int main(){
    int play;
    
    while (play >= 1 || play <4){
        cout<<"Game"<<endl;
        cout<<"<1> Odd Numbers"<<endl;
        cout<<"<2> Even Numbers"<<endl;
        cout<<"<3> All Numbers"<<endl;
        cout<<"1/ 2/ 3: ";cin>>play;

        switch (play)
        {
        case 1:{
            odd();
        }
            break;
        
        case 2:{
            even();
        }
            break;
        case 3:{
            lol();
        }
        break;
        }

    }

}
#endif

#if 0
int main()
{
 int choice;  // variable for user input
 int i;       // variable for loops and output
 do // loop until a valid choice is entered
  {
  cout << "Which series do you wish to display?\n";
  cout << "1 - Odd numbers from 1 to 30\n";
  cout << "2 - Even numbers from 1 to 30\n";
  cout << "3 - All numbers from 1 to 30\n";
  cin >> choice;  // get choice from user
  if (choice>= 1 || choice <4)
     cout << "Choice must be 1, 2, or 3\n";

     switch (choice)
    {
     case 1:
       for (i = 1; i <= 30; i = i + 2)
        cout << i << ' ';
       cout << endl;
       break;
     case 2:
       for (i = 2; i <= 30; i = i + 2)
        cout << i << ' ';
       cout << endl;
       break;
     case 3:
       for (i = 1; i <= 30; i++)
         cout << i << ' ';
       cout << endl;
       break;
    }
   }while(choice >= 1 || choice <4);
   return 0;

}


int main(){
    for (int i =0; i< 20; i++){
        if (i % 2 ==0){
            cout<<i<<" is odd"<<endl;
        }
        else{
            cout<<i<<" is even"<<endl;
        }
    }
}
#endif


int main()
{
	std::cout << 5.0 << '\n';
	std::cout << 6.7f << '\n';
	std::cout << 9876543.21 << '\n';

	return 0;
}