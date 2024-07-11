#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

struct shop
{
    char id[10];
    char *name;
    int price;
    int stock;
};
struct shop item[100];
int menu(int &n){
    cout<<setw(5)<<"MENU"<<endl;
    cout<<"1.Rgister"<<endl;
    cout<<"2.Sell"<<endl;
    cout<<"3.Check"<<endl;
    cout<<"4.Quit"<<'\n';
    int a;
    cout<<"1, 2, 3 or 4: ";
    cin>>a;
    n++;
return a;
}
void regisItem(struct shop item, int n, bool same){
    cout<<"Enter ID: "; cin>>item[n].id;

    for (int i = 0; i < n; i++){
        if (strcmp(item[n].id, item[i].id) == 0 && true){
            same = true;
            cout<<"Try again'\n'";
            break;
        }
    }
    if (!same){
        char name[100];
        cout<<"Item name: "; cin>>name;
        for (int i = 0; i< n; i++){
            item[]
        }
        cout<<"Price: "; cin>>item[n].price;
        cout<<"Amount: "; cin>>item[n].stock;
    }

}
void check( struct shop item[], int n){
    char key[10];
    int amount;

    std::cout << "How many items do you want: ";
    std::cin >> amount;
    std::cout << "Enter item ID: ";
    std::cin >> key;
    for (int i = 0; i < n; i++){

        if (strcmp(key, item[i].id) == 0 && true){
            cout<<"ID: "<<item[i].id<<endl;
            cout<<"Name: "<<item[i].name<<endl;
            cout<<"Price: "<<item[i].price<<endl;
            int total = item[i].price * amount;
            item[i].stock -= amount;
            cout<<"InStock: "<<item[i].stock<<endl;
            cout<<"Total: "<<total<<endl;

            }
        }   

    }
void summ(struct shop item[], int n){
    std::cout << std::setw(15) << "ID: ";
        std::cout << std::setw(15) << "Name: ";
        std::cout << std::setw(15) << "Cost: ";
        std::cout << std::setw(15) << "Stock: " << std::endl;
   for (int i = 0; i < n; i++){
        std::cout << std::setw(15) << item[i].id;
        std::cout << std::setw(15) << item[i].name;
        std::cout << std::setw(15) << item[i].price;
        std::cout << std::setw(15) << item[i].stock << std::endl;
}
}
int main(){
struct shop *item = new struct shop;
int n = 0;
bool same = false;

while (true){
    int select = menu(n);
    switch (select) {
        case 1: {
            regisItem(item, n, same);
        } break;
        case 2: {
            check(item, n);
        } break;
        case 3: {
            summ(item, n);
        } break;
        case 4: {
                return 0;
            } break;
        }
    }

}


