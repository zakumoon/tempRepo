#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
struct moneyHouse
{
    char id[10];
    char name[15];
    char add[20];
    float amount;

};

int main(){
    struct moneyHouse bank[500];
    int menuSelect = -1;
    int count = 0;
    bool free = false;

    while (true){
        cout<<setw(5)<<"MENU"<<endl;
        cout<<"<1> Open new accout"<<endl;
        cout<<"<2> Deposite"<<endl;
        cout<<"<3> Withdraw"<<endl;
        cout<<"<4> Compound Interest"<<endl;
        cout<<"<5> Quit"<<endl;
        cout<<"1/ 2/ 3/ 4/ or 5? = ";
        cin>>menuSelect;

        if (menuSelect == 5){
            break;
        }
        switch (menuSelect){
            case 1:{
                cout<<"ID?= ";cin>>bank[count].id;
                    for (int i = 0; i < count; i++){
                        if (strcmp(bank[count].id, bank[i].id) == 0){
                            free = true;
                            cout<<"This ID already used!!"<<endl;
                            cout<<"TRY AGAIN!"<<endl;
                        break;
                        }
                    }
                    if (!free){
                        cout<<"Name? = ";cin>>bank[count].name;
                        cout<<"Address?= ";cin>>bank[count].add;
                        cout<<"Amount?= ";cin>>bank[count].amount;
                    count++;
                    }
            }
            break;
            case 2:{
                char key[10];
                int money;

                cout<<"Enter accout ID?= ";cin>>key;
                    for (int i = 0; i < count; i++){
                        if (strcmp(bank[i].id, key) == 0 && true){
                            cout<<"Deposite amount: ";cin>>money;
                            bank[i].amount += money;

                        cout<<setw(5)<<"ID: "<<bank[i].id<<endl;
                        cout<<setw(5)<<"Name: "<<bank[i].name<<endl;
                        cout<<setw(5)<<"Address: "<<bank[i].add<<endl;
                        cout<<setw(5)<<"Balance: "<<bank[i].amount<<endl;
                        break;
                        }
                        

                        
                    }
            }
            break;
            case 3:{
                char key[10];
                int money;

                cout<<"Enter accout ID?= ";cin>>key;
                    for (int i = 0; i < count; i++){
                        if (strcmp(bank[i].id, key) == 0 && bank[i].amount >= 100){
                            cout<<"Withdraw amount: ";cin>>money;
                            bank[i].amount -= money;

                        cout<<setw(5)<<"ID: "<<bank[i].id<<endl;
                        cout<<setw(5)<<"Name: "<<bank[i].name<<endl;
                        cout<<setw(5)<<"Address: "<<bank[i].add<<endl;
                        cout<<setw(5)<<"Balance: "<<bank[i].amount<<endl;
                        break;
                        }
                        
                    }
            }
            break;
            case 4:{
                float year, rate, getRate, finale;
                cout<<"Rate?= : ";cin>>rate;
                cout<<"Years?= : ";cin>>year;
                for (int i = 0; i < count; i++){
                    getRate = (bank[i].amount * rate) / 100;
                    finale = bank[i].amount + (getRate * year);
                    cout<<setw(5)<<"Interest per year: "<<getRate<<endl;
                    cout<<setw(5)<<"Current balance: "<<finale<<endl;
                }
            }
            break;
        }

    }
}

