#include <iostream>
using namespace std;

void getchoice(int choice) {
 do // loop until a valid choice is entered
  {
    cout << "Which series do you wish to display?\n";
    cout << "1 - Odd numbers from 1 to 30\n";
    cout << "2 - Even numbers from 1 to 30\n";
    cout << "3 - All numbers from 1 to 30\n";
    cin>>choice;
    if ((choice < 1) || (choice > 3))
     {  // if invalid entry, give message
        cout << "Choice must be 1, 2, or 3\n";
     }
  } while ((choice < 1) || (choice > 3));
}

void printOdd(int n) {
   for (int i = 0; n <= n; i = i + 2)
	    cout << i << ' ';
   cout << endl;   
}

void printEvent(int n) {
   for (int i = 0; i <= n; i = i + 2)
	    cout << i << ' ';
   cout << endl;   
}

void printAll(int n) {
   for (int i = 0; i <= n; i = i + 2)
	    cout << i << ' ';
   cout << endl;   
}

int main()
{
  int choice;
  getchoice(choice);
  switch (choice)
    {
     case 1:
        printOdd(10);
       break;
     case 2:
        printEvent(10) ;
       break;
     case 3:
        printAll(10);
       break;
    }
  return 0;
}
