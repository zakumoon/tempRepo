#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;

struct product {
	char id[10];
	char name[30];
	float cost;
	int instock;
};

int main()
{
	struct product item[100];
	int n = 0;
	int select = -1;


	while (true)
	{

		cout << " Menu" << endl;
		cout << "1. Add item to Cart " << endl;
		cout << "2. Sell product " << endl;
		cout << "3. Check stock " << endl;
		cout << "4. End program" << endl;
		cout << "Please select 1 / 2 / 3/ 4 =? ";
		cin >> select;

		if (select == 4) {
			break;
		}
		switch (select)
		{
		case 1:
		{
			cout << "New product: " << endl;
			cout << "id =? ";  cin >> item[n].id;
			cout << "name=? "; cin >> item[n].name; 
			cout << "cost=? ";     cin >> item[n].cost;
			cout << "instock=? "; cin >> item[n].instock;
			n++;

		}
		break;
		case 2:
		{
			int i;
			int buyvolumn;
			char key[30];   //c++ allows declare in scope { }
			cout << "Input your product id:  ";
			cin >> key;
			cout << "Input your buy volumn:  ";
			cin >> buyvolumn;

			for (i = 0; i < n; i++) {
				if (strcmp(key, item[i].id) == 0)
					break;
			}
			cout << "name= " << item[i].name  << endl;
			cout << "cost=" << item[i].cost << endl;
			cout << "instock=" << item[i].instock << endl;
			cout << "Pay = " << item[i].cost* buyvolumn;
			item[i].instock -= buyvolumn;
		}
		break;
		case 3:
		{
			cout << setw(15) << "id";
			cout << setw(15) << "name";
			cout << setw(15) << "cost";
			cout << setw(15) << "instock" << endl;
			for (int i = 0; i < n; i++)
			{
				cout << setw(15) << item[i].id;
				cout << setw(15) << item[i].name  ;
				cout << setw(15) << item[i].cost;
				cout << setw(15) << item[i].instock << endl;
			}
	 

		}
		break;
		}
	}
	return 0;
}
