// basicLinklist.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct node {
	int d;
	struct node *next;
};


struct node *head;

void Add(int d) {
	struct node *q = new struct node;
	q->d = d;
	q->next = NULL;
	struct node *n = head;
	struct node *p = NULL;
	while (n != NULL) {
		if (n->d > d) {
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

int Find(int d) {
	int count = 0;
	struct node *p = head;
	while (p != NULL) {
			count++;
			if (p->d == d) {
			return count;
		}
		p = p->next;
	}
	return false;
}

void showList()
{
	int i = 0;
	struct node *n = head;
	while (n != NULL) {
		cout << n->d << ",";
		n = n->next;
		i++;
	}

	cout << "\n number of nodes : " << i;

}

bool Delete(int d) {
	struct node *n = head;
	struct node *p = NULL;
	while (n != NULL) {
		if (n->d == d) {
			break;
		}
		p = n;
		n = n->next;
	}
	if (n == NULL) {
		return false;
	}
	//remove head
	if (n == head) {
		head = head->next;
		delete n;
	}
	else {
		p->next = n->next;
		delete n;
		
	}
	return true;
}



int getchoice() {
	int c;
	do {
		cout << "\n 0 : terminate";
		cout << "\n 1 : add item";
		cout << "\n 2 : remove item";
		cout << "\n 3 : find item";
		cout << "\n 4 : show list";
		cout << "\n input choice :  ";
		cin>> c;
	} while( (c >=0 && c<=4) == false);
	return c;
}

int main()
{
	while (true) {
		int c;
		c = getchoice();
		if (c <= 0) {
			break;
		}
		switch (c) {
			case 1: 
				{
					cout << "add input data : ";
					int d;
					cin >> d;
					Add(d);
				}
				showList();
				break;
			case 2:
				{
					cout << "delete input data : ";
					int d;
					cin >> d;
					Delete(d);
				}
				showList();
			break;
			case 3:
			{
				int d;
				cout << "find input data : ";
				cin >> d;
				int res = Delete(d);
				if ( res <0 ) {
					cout << "\n data not found";
				}
				else {
					cout << "\n data found at " << res;
				}
				showList();
			}
			break;
			case 4:
			{
				cout << "show List\n";
				showList();
			}
			break;
		}
	}
}

