#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

struct shop{
    char id[10];
    char *name;
    int cost;
    int instock;
};

struct shop *item= (struct *)malloc((strlen(struct product)) * 100);
int n = 0;
int getMenu(int &n){
    cout<<setw(5)<<"MENU"<<endl;
    cout<<"1.Rgister"<<endl;
    cout<<"2.Sell"<<endl;
    cout<<"3.Check"<<endl;
    cout<<"4.Write"<<'\n';
    cout<<"5.Read"<<'\n';
    cout<<"6.Quit"<<'\n';
    int a;
    cout<<"1, 2, 3, 4, 5 or 6 : ";
    cin>>a;
return a;
}

void add(){
    char name[100];
    cout << "New product: " << endl;
	cout << "id =? ";  cin >> item[n].id;
	cout << "name=? "; cin >>name;
    item[n].name = (char*)malloc((strlen(name) +1 ) * sizeof(char *));
    strcpy(item[n].name,name)
	cout << "cost=? ";     cin >> item[n].cost;
	cout << "instock=? "; cin >> item[n].instock;
    
	n++;
}
void sell(){
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
void check(){
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
void write(char *wfile){
    FILE *fp = fopen(&write,"wt");
			for (int i = 0; i < n; i++) {
				fprintf(fp, "%s %s %f %d\n",item[i].id,item[i].name,item[i].cost,item[i].instock);

			}
			fclose(fp);
}
void read(char &read){
    FILE *fp = fopen(&read, "rt");

			cout << "id" << setw(8) << "name" << setw(8) << "cost" << setw(8)
				<< "instock" << endl;

			while (!feof(fp)) {
				char id[10];
				char name[30];
				float cost;
				int instock;

				fscanf(fp, "%s %s %f %d", id, name, &cost, &instock);

				strcpy(item[n].id, id);
				item[n].name = (char *)malloc((strlen(name) + 1) * sizeof(char));
				strcpy(item[n].name, name);
				item[n].cost = cost;
				item[n].instock = instock;

				cout<<"New Product"<<endl;
                cout<<"Id? = "<<id<<endl;
                cout<<"Name? = "<<name<<endl;
                cout<<"Cost? = "<<cost<<endl;
                cout<<"InStock? = "<<instock<<endl;
                cout<<endl;
				n++;

			}
			fclose(fp);

}

int main(){
    int select = -1;
    char *twrite = ("/home/zk/univ166/cos201/file/writeStock.txt");
    char *tread = ("/home/zk/univ166/cos201/file/readStock.txt");

    while (true){
        getMenu(n);
        if (select == 6){
            break;
        }
        switch (select){
            case 1:{
                add();
            }
            break;
            case 2:{
                sell();
            }
            break;
            case 3: {
                check();
            }
            break;
            case 4:{
                write((char *)"/home/zk/univ166/cos201/file/writeStock.txt");
            }
            break;
            case 5: {
                read(&tread);
            }
        }
    }
}