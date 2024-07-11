#include <iostream>
#include <cstring>
#include <iomanip>


using namespace std;

struct product {
	char id[10];
	char name[30];
	float cost;
	int instock;

	struct product *next;
};
struct product *head = nullptr;
int i = 0;


int getMenu(){
	int select = -1;

	cout << " Menu" << endl;
	cout << "1. Add item to Cart " << endl;
	cout << "2. Sell product " << endl;
	cout << "3. Check stock " << endl;
	cout << "4. End program" << endl;
	cout << "5. Write Data to file" << endl;
	cout << "6. Read Data from file" << endl;

	cout << "Please select 1/ 2/ 3/ 4=? ";
	cin >> select;
return select;
}


void stonk(char id[], char name[], int price, int instock){

	struct product *main = new product;

	strcpy(main->id, id);
	strcpy(main->name, name);
	main->cost = price;
	main->instock = instock;
	main->next = NULL;

	struct product *lead = head;
	struct product *fol = NULL;

	while (lead != NULL){
		if (strcmp(lead->id, id) == 1){
			break;
		}
		fol = lead;
		lead = lead->next;
	}
	if(lead == head){
		main->next = head;
		head = main;
		return;
	} 
	main->next = fol->next;
	fol->next = main;
}

void add(){
	char id[10];
	char name[100];
	float cost;
	int instock;

	cout<<"New product"<<endl;
	cout<<"id = "; cin>>id;
	cout<<"name = "; cin>>name;
	cout<<"price = ";cin>>cost;
	cout<<"Instock = "; cin>>instock;
	i++;
	stonk(id, name, cost, instock);
}

void sell(char key[], int volume){
	struct product *n = head;
	struct product *fol = NULL;
	while (n != NULL){
		if (strcmp(n->id, key) == 0){
			cout << "name= " << n->name << endl;
			cout << "cost=" << n->cost << endl;
			cout << "instock=" << n->instock << endl;
			cout << "Pay = " << n->cost* volume;
			n->instock -= volume;
			cout<<endl;
		break;
		}
		if(n == head){
			head = head->next;
			delete n;
		}
		else{
			fol->next = n->next;
			delete n;
		}
	}
}
void show(){
	struct product *n = head;
	cout << setw(15)<<"n";
	cout << setw(15) << "id";
	cout << setw(15) << "name";
	cout << setw(15) << "cost";
	cout << setw(15) << "instock" << endl;
	cout << setw(15) << "next";

	while (n != NULL){

		cout <<std::hex << setw(15) << n;
		cout << setw(15) << n->id;
		cout << setw(15) << n->name;
		cout << setw(15) << n->cost;
		cout << setw(15) << n->instock;
		cout<< setw(15) << n->next<<endl;
		cout<< endl;
		n = n->next;
	}
}

void iwrite(const char *file){
	struct product *n = head;

	FILE *fp = fopen(file, "wb");

	if (fp == NULL){
		cout<<"Error! Cat ate file";
	}
	while (n != NULL){
		fwrite(n, sizeof(struct product), 1, fp);
		n = n->next;
	}
	fclose(fp);

}
void iread(const char *file){
	struct product n;

	FILE *fp = fopen(file, "rb");
	while (!feof(fp)){
		int sz = fread(&n, sizeof(struct product), 1, fp);
		if (sz > 0){
			cout<<"id = "<< n.id<<endl;
			cout<<"name = " << n.name<<endl;
			cout<<"price = " << n.cost<<endl;
			cout<<"Instock = " << n.instock<<endl;
			cout<<"Next = "<<std::hex<< n.next<<endl;

			stonk(n.id, n.name, n.cost, n.instock);
			i++;

		}
	}
	fclose(fp);


} 

void itxRead(const char *file){
	FILE *fp = fopen(file, "rt");

	stuct product *n = head;

	char id[10];
	char name[100];
	float price;
	int instock;

	while (n != NULL){
		fread(n, "%c %c %f %d", 
			strcpy(n->id , id),
			strcpy(n->name, name),
			id
			)
	}

}
void itxwrite(const char *file){
	FILE *fp = fopen(file, "wt");
}
int main(){
	while (true){
		int c = getMenu();
		if(c == 4){
			break;
		}
		switch(c){
			case 1:{
				
				add();
			}
			break;
			case 2: {
				char key[10];
				int volume;
				cout<<"Key: ";cin>>key;
				cout<<"Buy volume: ";cin>>volume;
				sell(key, volume);
			}
			break;
			case 3:{
				show();
			}
			break;
			case 5:{
				iwrite("/home/zk/univ166/cos201/file/writeLink.txt");
				}
				break;
			case 6:{
				iread("/home/zk/univ166/cos201/file/writeLink.txt");
			}
			break;
			case 7: {
					itxRead("/home/zk/univ166/cos201/file/writeLink.txt");

			}
			break;
			case 8: {
					itxwrite("/home/zk/univ166/cos201/file/writeLink.txt");

			}
			break;
		}
	}
	return 0;
}
