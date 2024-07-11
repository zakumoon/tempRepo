//
#define _CRT_SECURE_NO_WARNINGS

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

//struct product item[100];
struct product *item;
int n = 0;

int getMenu()
{
	int select = -1;

	cout << " Menu" << endl;
	cout << "1. Add item to Cart " << endl;
	cout << "2. Sell product " << endl;
	cout << "3. Check stock " << endl;
	cout << "4. End program" << endl;
	cout << "5. Write Data to file" << endl;
	cout << "6. Read Data from file" << endl;

	cout << "Please select 1/ 2/ 3/ 4/ 5/ 6/=? ";
	cin >> select;
	return select;
}

void getStock()
{
	cout << "New product: " << endl;
	cout << "id =? ";  cin >> item[n].id;
	cout << "name=? "; cin >> item[n].name;
	cout << "cost=? ";     cin >> item[n].cost;
	cout << "instock=? "; cin >> item[n].instock;
	n++;
}

void showStock()
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
void sellStock()
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

void readStockFile(char *fname)
{
	FILE *fp = fopen(fname, "rb");
	while (feof(fp) == false)
	{
		int sz = fread(&item[n], sizeof(struct product), 1, fp);
		if (sz > 0) {
			cout << "New product: " << endl;
			cout << "id =? " << item[n].id << endl;
			cout << "name=? " << item[n].name << endl;
			cout << "cost=? " << item[n].cost << endl;
			cout << "instock=? " << item[n].instock << endl;

			n++;
		}
	}
	fclose(fp);
}

void writeStockFile(char *fname)
{
	FILE *fp = fopen(fname, "wb");

	for (int i = 0; i < n; i++)
	{
		fwrite(&item[i], sizeof(struct product), 1, fp);

	}
	fclose(fp);
}

int main()
{

	int select = -1;
	item = (struct product*)malloc(sizeof(struct product) * 100);
	while (true)
	{
		/*
			cout << " Menu" << endl;
			cout << "1. Add item to Cart " << endl;
			cout << "2. Sell product " << endl;
			cout << "3. Check stock " << endl;
			cout << "4. End program" << endl;
			cout << "Please select 1 / 2 / 3/ 4 =? ";
			cin >> select;
		*/
		int select = getMenu();
		if (select == 4) {
			break;
		}
		switch (select)
		{
		case 1:
		{
			getStock();
		}
		break;
		case 2:
		{
			sellStock();
		}
		break;
		case 3:
		{
			showStock();
		}
		break;
		case 5:
		{
			writeStockFile((char*)"d:/temp1/stock.out2");
		}
		break;
		case 6:
		{
			readStockFile((char*)"d:/temp1/stock.out2");
			
		}
		break;

		}
	}
	free(item);
	return 0;
}

