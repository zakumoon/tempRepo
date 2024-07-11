#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string.h>
#include <iomanip>

using namespace std;

struct product {
	char id[10];
	char *name;           
	float cost;
	int instock;
};

int main()
{
	//struct product item[100];
	struct product *item;
	item = (struct product *) malloc(sizeof(struct product) * 100);

	
	int n = 0;
	int select = -1;

	while (true)
	{
		
		cout << " Menu" << endl;
		cout << "1. Add item to Cart " << endl;
		cout << "2. Sell product " << endl;
		cout << "3. Check stock " << endl;
		cout << "4. End program" << endl;
        cout<<"5. FILE"<<endl;
        cout<<"6. Read file:"<<endl;
		cout << "Please select 1 / 2 / 3/ 4/ 5/ 6 =? ";
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
			cout << "cost=? "; cin >> item[n].cost;
			cout << "instock=? "; cin >> item[n].instock;
			item[n].name = (char *)malloc((strlen(name) + 1) * sizeof(char));
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
		case 5:{
                FILE *outfile = fopen("/home/zk/univ166/cos201/file/writeStock.txt", "wt");
                
        }
        break;

        }
	}
	for (int i = 0; i < n; i++) {
		free(item[i].name);
	    }

	free(item);

	return 0;
}
