#include <iostream>
#include <iomanip>
using namespace std;

struct node {
	int d;
	struct node *next;
};


struct node *head;

void Add(int d) {
	struct node *q = new struct node;
	q->d = d;   //d 
	q->next = NULL;
	struct node *n = head;   //n has access to node property
	struct node *p = NULL;
	while (n != NULL) {
		if (n->d > d) {
			break;
		}
		p = n;  
		n = n->next; 
	}

	//first element
	if (n == head) {    	//if n and head point at same location
		q->next = head; 	//create q.next or next move to head lead
		head = q;			//and current head to q which 
		return;
		}

		p->next = q;		//assign that next of p is q or main 
		q->next = n;		// and next of q will be n means n is first 
	}
}

int Find(int d) {			//get d from user lets ccall it value
	int count = 0;			
	struct node *p = head;	
	while (p != NULL) {		//while node p is not null
			count++;		//count that times
			if (p->d == d) {	// if d in node p and value d from user are same
			return count;		//return count or number of times it repeated
		}
		p = p->next;			//move p to next until its null
	}
	return false;
}

void showList()
{
	int i = 0;
	struct node *n = head;
	while (n != NULL) {
		cout << n->d << ",";		// like 100 , 200, its comma
		n = n->next;				// here n is n.next
		i++;						//i = i+ 1 until its n is null
	}

	cout << "\n number of nodes : " << i; //cout total nodes 

}

bool Delete(int d) {
	struct node *n = head;
	struct node *p = NULL;
	while (n != NULL) {		//while n is not null
		if (n->d == d) {	//if d in n has same value as d from user
			break;			//break
		}
		p = n;				//set p to n 
		n = n->next;		//and n to next n or head 
	}
	if (n == NULL) {		// if n has value of null return false
		return false;
	}
	//remove head
	if (n == head) {		//if n and head point same location
		head = head->next;	// mave head to next
		delete n;			//and remove n its bussiness finish 
	}
	else {
		p->next = n->next;    //assign p.next to same place of n.next not n place
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
		c = getchoice();			//get input from user for menu
		if (c <= 0) {
			break;
		}
		switch (c) {				//check that num from user
			case 1: 
				{
					cout << "add input data : ";
					int d;
					cin >> d;
					Add(d);				//calling add void with passing d value
				}
				showList();				//show the all list num
				break;
			case 2:
				{
					cout << "delete input data : ";
					int d;
					cin >> d;
					Delete(d);				//delete the existing things from link
				}
				showList();
			break;
			case 3:							//find data in your link
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
