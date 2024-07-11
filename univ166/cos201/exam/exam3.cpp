// exam3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;

struct product {
	char id[10];

	char name[30];
	//char *name;

	float cost;
	int instock;
};

int main()
{
	//struct product item[100];
	struct product *item = (struct product *)malloc(sizeof(struct product) * 100);
	int n = 0;
	int select = -1;

	while (true)
	{

		cout << " Menu" << endl;
		cout << "1. Add item to Cart " << endl;
		cout << "2. Sell product " << endl;
		cout << "3. Check stock " << endl;
		cout << "4. End program" << endl;
		//
		cout << "5. Write Data to file" << endl;
		cout << "6. Read Data from file" << endl;

		cout << "Please select 1/ 2/ 3/ 4/ 5/ 6/=? ";
		cin >> select;

		if (select == 4) {
			break;
		}
		switch (select)
		{
		case 1:
		{
			char name[100];
			cout << "New product: " << endl;
			cout << "id =? ";  cin >> item[n].id;
			cout << "name=? "; cin >> name;
			cout << "cost=? ";     cin >> item[n].cost;
			cout << "instock=? "; cin >> item[n].instock;

			//item[n].name = (char *)malloc((strlen(name) + 1) * sizeof(char));
			strcpy(item[n].name, name);

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
			cout << "name= " << item[i].name << endl;
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
				cout << setw(15) << item[i].name;
				cout << setw(15) << item[i].cost;
				cout << setw(15) << item[i].instock << endl;
			}


		}
		break;
		case 5:
		{
			FILE *fp = fopen("d:/temp1/stock.out2", "wb");

			for (int i = 0; i < n; i++)
			{
				fwrite(&item[i], sizeof(struct product), 1, fp);

			}
			fclose(fp);
		}
		break;

		case 6:
		{
	
			FILE *fp = fopen("d:/temp1/stock.out2", "rb");
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
		break;
		}

	}
/*
	for (int i = 0; i < n; i++) {
		cout << endl;
		cout << "free mem" << item[i].name;
		free(item[i].name);
	}
*/
	free(item);

	return 0;
}



