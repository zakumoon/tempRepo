#include <iostream>
#include <iomanip> //using setw( n )
using namespace std;
int main()
{
cout <<"01234567890123456789012345678901234567890123456789\n";
cout << "0123" << "4567" << " |no setw \n";
cout << setw(1) << "0123" << setw(1) << "4567" << " |setw(1) \n";
cout << setw(2) << "0123" << setw(2) << "4567" << " |setw(2) \n";
cout << setw(4) << "0123" << setw(4) << "4567" << " |setw(4) \n\n";
cout <<"01234567890123456789012345678901234567890123456789\n";
cout << setw(5) << "0123" << setw(5) << "4567" << " |setw(5) \n\n";
cout <<"01234567890123456789012345678901234567890123456789\n";
cout << setw(10) << "0123" << setw(10) << "4567" << " |setw(10) \n";
}
