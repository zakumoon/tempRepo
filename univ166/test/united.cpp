#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct node
{
	int p;
	struct node *next;
};
struct node * head;

void add(int num){
	struct node *n = new node;
	n->p = num;
	n->next	= NULL;

	node *lead = head;
	node *fol = NULL;

	while(lead != NULL){
		if (lead->p > num){
			break;
		}
		fol = lead;
		lead = lead->next;
	}
	if(lead == head){
		n->next = head;
		head = n;
		return;
	}
	fol->next = n;
	n->next = lead;

}

int find(int a){
	int cout = 0;
	node *n = head;
	while (n != NULL){
		cout++;
		if (n->p == a){
			return cout;
		}
		n = n->next;
	}
	return false;
}

void display(){
	int dis = 0;
	node *n = head;
	while (n != NULL){
		cout<< n->p <<", ";
		n = n->next;
	dis++;
	}
	cout<<endl;
	cout<<"num of nodes: "<<dis;
}

bool remove(int inp){
	struct node *lead = head;
	struct node *fol = NULL;

	while (lead != NULL){
		if (lead->p == inp){
			break;
		}
		fol = lead;
		lead = lead->next;
	}
	if(lead == NULL){
		return false;
	}
	if(lead == head){
		head = head->next;
		delete lead;
	}
	else{
		fol->next = lead->next;
		delete lead;
	}
return true;
}

void iwrite(const char *fname){
	node *n = head;

	FILE *write = fopen(fname, "wt");

	if (write == NULL){
		cout"Empty file\n";
	}
	
	while(n != NULL){
		fprintf(write, "%d", n->p);
		n = n->next;
	}
	fclose(write);
}

void iread(const char *fname){
	FILE *read = fopen(fname, "rt");

	if (read == NULL) {
		perror("Error opening file");
		return; // Handle the error here (e.g., return or exit the function)
	}

	// Clear the current linked list
	while (head != NULL) {
		struct node *temp = head;
		head = head->next;
		delete temp;
	}

	// Read from the file and add nodes to the linked list
	int r;
	while (fscanf(read, "%d", &r) == 1) {
		add(r);
	}

	fclose(read);
}


int menu(){
	int n;
	do{
		cout << "\n 0 : terminate";
		cout << "\n 1 : add item";
		cout << "\n 2 : remove item";
		cout << "\n 3 : find item";
		cout << "\n 4 : show list";
		cout << "\n 5 : read text file";
		cout << "\n 6 : write text file";
		cout << "\n input choice :  ";
		cin>>n;

	}while ((n>=0 && n<=6) == false);
return n;
}
int main(){
	while (true){
		int num;
		num = menu();

		if (num == 0){
			break;
		}
		switch(num){
			case 1:{
				int n;
				cout<<"Number: ";cin>>n;
				add(n);
			}
			display();
			break;
			case 2:
				{
				int n;
				cout<<"Delete num: ";cin>>n;
				remove(n);
			}
			display();
			break;
			case 3:{
				int a;
				cout<<"Find node: ";cin>>a;
				int data = find(a);
				if(data != head->p){
					cout<<" \n Data not found \n";
				}
				else{
					cout<<"\n data found: "<<data;
				}
			}
			display();
			break;
			case 4:{
				cout<<"\n Show list: ";
				display();
			}
			break;
			case 5:{
				iwrite("/home/zk/univ166/cos201/file/writeLink.txt");
			}
			break;
			case 6:
				{
				iread("/home/zk/univ166/cos201/file/readLink.txt");
			}
			break;
		}
	}



}