#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;

struct node {
	int coef;
	int power;
	struct node *next;
};


struct node *head;

void Add(int coef,int power) {
	struct node *q = new struct node;
	q->coef = coef;
	q->power = power;
	q->next = NULL;
	struct node *n = head;
	struct node *p = NULL;
	while (n != NULL) {
		if (n->power > power) {
			break;
		}
		p = n;
		n = n->next;
	}

	//first element
	if (n == head) {
		q->next = head;
		head = q;
		return;
	}

	p->next = q;
	q->next = n;
}


int getData() {
	int count = 0;
	int coef;
	int power;
	do {
		count++;
		cout << "coef : ";
		cin >> coef;

		cout << "power : ";
		cin >> power;

		Add(coef, power);
	} while (power != 0);
	cout << "number of node : " << count;
	return count;

}

int power_x(int x, int p) {
	int m = 1;
	for (int i = 0; i < p; i++) {
		m *= x;
	}
	return x;
}

void caculateData() {
	int x;
	cout <<" x (i)  =  ";
	cin >> x;

	int sum = 0;
	int i = 0;
	struct node *n = head;
	while (n != NULL) {
		
		int  e =	n->coef * power_x(x, n->power);
		sum += e;

		n = n->next;
		i++;
	}

	cout << "\n Y =  " << sum;

}

void showData() {
	int i = 0;
	struct node *n = head;
	cout << "\n";
	while (n != NULL) {
		cout  <<std::dec << "coef  : " << n->coef  << "power : " << n->power << ",   n : " << std::hex << n << "   next :  " << std::hex << n->next;

		cout << std::dec <<endl;
		n = n->next;
		i++;
	}

	cout << "\n number of nodes : " << i;
}

void writeTextData(char *fname)
{
	FILE *fp = fopen(fname, "wt");
	struct node *n = head;
	while (n != NULL) {
		fprintf(fp, "%d  %d \n", n->coef, n->power);
		n = n->next;
	}

	fclose(fp);

}


void readTextData(char *fname)
{
	FILE *fp = fopen(fname, "rt");
	//feof(fp) -> true , false
	while ( feof(fp) != true) {
		int coef;
		int power;

		int nfield =fscanf(fp, "%d  %d \n", &coef, &power);

		printf( "coef = %d  , power =  %d \n", coef, power);

		Add(coef, power);
	}

	fclose(fp);

}

void freeNode()
{
	while(head != NULL) {
		struct node *n = head;
		head = head->next;
		delete n;
	}
}


int getMenu()
{
	int select;

	cout << " Menu" << endl;

	cout << "0. Terminate " << endl;
	cout << "1. Add equation " << endl;
	cout << "2. Caculate Data " << endl;
	cout << "3. Show Data " << endl;

	//coef  power
	// -5   4
	// 6    0
	cout << "4. Write (text) " << endl;
	cout << "5. Read (text) " << endl;

	cout << "Please select 0/1/ 2/ 3=? ";
	cin >> select;

	return select;
}



int main()
{
	while (true)
	{

		int choice = getMenu();
		if (choice == 0) {
			break;
		}

		switch (choice) 
		{
			case 1:
			{
				freeNode();
				getData();

			}
			break;
			case 2:
			{
				caculateData();

			}
			break;
			case 3:
			{
				showData();

			}
			case 4:
			{
				writeTextData((char*)"d:/temp1/exam6.out");
 
			}
			case 5:
			{
				freeNode();
				readTextData((char*)"d:/temp1/exam6.out");

			}

			default:
				cout << "get choice again" << endl;

		}
	}

	freeNode();
}

