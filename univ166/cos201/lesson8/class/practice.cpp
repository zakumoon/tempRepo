#include <iostream>
using namespace std;
#if 0

void print_value( int j);
int main()
{
int i = 2;
cout << "Value before = " << i << endl ;
print_value( i );
cout << "Value after = " << i << endl ;
i = 40;
print_value( i );
cout << "Value after = " << i << endl ;
return 0;
}
void print_value( int j )
{
cout << "value passed = " << j << endl ;
j = j*2 ;
cout << "value at end func = " << j << endl ;
}

 
 
void pass_val ( int x , double &y ) ;
int main() 
{ 
    double y = 18.0 ;
    int x = 3 ;  
    pass_val ( x  , y );
    cout << "\nmain -> x = " << x; 
    cout << "\nmain -> y = " << y ;
}
void pass_val ( int l , double &a)
{
    cout << "\npass_val before -> l = " << l; 
    cout << "\npass_val before -> a = " << a ;
    
    l = l*2;  a = a+2;
    cout << "\npass_val -> l = " << l; 
    cout << "\npass_val -> a = " << a ;
}

 
void pass_val ( int x , double &y ) ;
int main() 
{ 
    double y = 18.0 ;
    int x = 3 ;  
    int i=100;
    double j=91.1;
    cout << "\nmain before -> x = " << x; 
    cout << "\nmain before  -> y = " << y ;
    
    pass_val ( x  , y );
    cout << "\nmain -> x = " << x; 
    cout << "\nmain -> y = " << y ;

    cout << "\nmain before -> i = " << i; 
    cout << "\nmain before  -> j = " << j ;
    
    pass_val ( i  , j );
    cout << "\nmain -> i = " << i; 
    cout << "\nmain -> j = " << j ;
    
}
void pass_val ( int l , double &a)
{
    cout << "\npass_val before -> l = " << l; 
    cout << "\npass_val before -> a = " << a ;
    
    l = l*2;  a = a+2;
    cout << "\npass_val -> l = " << l; 
    cout << "\npass_val -> a = " << a ;
}


struct employee {
 char name[100];
 int age;
 float salary;
 char department[50];
};
 
// This function takes structure variable as parameter
void printEmployeeDetails(struct employee emp){
   cout << "\n*** Employee Details ***\n";
   cout << "Name : " << emp.name << "\nAge : "<< emp.age << "\nSalary : "
        << emp.salary << "\nDepartment : "<< emp.department;
}
int main(){
   struct employee manager ;
     
   printf("Enter Name, Age, Salary and Department of Employee\n");
   // Assigning data to members of structure variable
   cin >> manager.name >> manager.age >> manager.salary >> manager.department;
     
   // Passing structure variable to function
   printEmployeeDetails(manager);
}
void updateArray( int begin, int data[ ],int n )
{
    for(int i = begin ; i < n ; i++) {
        data[i] = data[i]+1000; 
    }    
}
void showarray( int begin, int data[ ],int n )
{
    for(int i = begin; i < n ; i++) {
        cout << data[i] << ",";
    }    
}
int main() {
  int data[10] = {2000, 2100, 2200, 2300, 2400};
  int Roll_Number[5] = {100,101,102,103,104};

    cout << "\nbefore update \n";
    showarray(0, Roll_Number, 5);
    updateArray(1, Roll_Number,3);
    cout << "\nafter update \n";
    showarray(1, Roll_Number,5);
    cout<<endl;

    cout << "\nbefore update \n";
    showarray(1, data, 5);
    updateArray(0, data,5);
    cout << "\nafter update \n";
    showarray(1, data,5);
    cout<<endl;
}
#endif
int getchoice() {
 int choice;  // variable for user input
 do // loop until a valid choice is entered
  {
    cout << "Which series do you wish to display?\n";
    cout << "1 - Odd numbers from 1 to 30\n";
    cout << "2 - Even numbers from 1 to 30\n";
    cout << "3 - All numbers from 1 to 30\n";
    cin >> choice;  // get choice from user
    if ((choice < 1) || (choice > 3))
     {  // if invalid entry, give message
        cout << "Choice must be 1, 2, or 3\n";
     }
  } while ((choice < 1) || (choice > 3));
  return choice;    
}

void printOdd() {
   for (int i = 1; i <= 30; i = i + 2)
	    cout << i << ' ';
   cout << endl;   
}

void printEvent() {
   for (int i = 2; i <= 30; i = i + 2)
	    cout << i << ' ';
   cout << endl;   
}

void printAll() {
   for (int i = 2; i <= 30; i = i + 2)
	    cout << i << ' ';
   cout << endl;   
}

int main()
{

  int choice = getchoice();
  switch (choice)
    {
     case 1:
        printOdd();
       break;
     case 2:
        printEvent() ;
       break;
     case 3:
        printAll( );
       break;
    }
  return 0;
}