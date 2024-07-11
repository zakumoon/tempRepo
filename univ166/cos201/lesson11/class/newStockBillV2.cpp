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


int getMenu()
{
	int select = -1;

	cout << " Menu" << endl;
	cout << "1. Add item to Cart " << endl;
	cout << "2. Sell product " << endl;
	cout << "3. Check stock " << endl;
	cout << "4. End program" << endl;
	cout << "Please select 1 / 2 / 3/ 4 =? ";
	cin >> select;
	return select;
}

void getStock(int &n, struct product item[])
{
	cout << "New product: " << endl;
	cout << "id =? ";  cin >> item[n].id;
	cout << "name=? "; cin >> item[n].name;
	cout << "cost=? ";     cin >> item[n].cost;
	cout << "instock=? "; cin >> item[n].instock;
	n++;
}

void showStock(int n, struct product item[])
{
	cout << setw(15) << "id";
	cout << setw(15) << "name";
	cout << setw(15) << "cost";
	cout << setw(15) << "instock" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << setw(15) << item[i].id;
		cout << setw(15) << item[i].name;
		cout << setw(15) << item[i].cost;
		cout << setw(15) << item[i].instock << endl;
	}

}
void sellStock(int n, struct product  item[])
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
	cout << "name= " << item[i].name << endl;
	cout << "cost=" << item[i].cost << endl;
	cout << "instock=" << item[i].instock << endl;
	cout << "Pay = " << item[i].cost* buyvolumn;
	item[i].instock -= buyvolumn;
}

int main()
{
	struct product *item = (struct product *)molloc(sizeof(struct product) *100);
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
	
		int select = getMenu();
		if (select == 4) {
			break;
		}
		switch (select)
		{
		case 1:
		{
			getStock(n, item);
		}
		break;
		case 2:
		{
			sellStock(n, item);
		}
		break;
		case 3:
		{
			showStock(n, item);
		}
		break;
		}

	}
	free (item);
	return 0;
}

