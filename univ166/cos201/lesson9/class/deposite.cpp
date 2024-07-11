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

int menu(int menuSelect){
    do {
        cout<<setw(5)<<"MENU"<<endl;
        cout<<"<1> Open new accout"<<endl;
        cout<<"<2> Deposite"<<endl;
        cout<<"<3> Withdraw"<<endl;
        cout<<"<4> Compound Interest"<<endl;
        cout<<"<5> Summery"<<endl;
        cout<<"<6> Quit"<<endl;
        cout<<"1/ 2/ 3/ 4/ or 5? = ";
        cin>>menuSelect;
        if(menuSelect == 6){
            break;
        }

    }while ((menuSelect >= 1 && menuSelect < 6) == false);
    return menuSelect;
}
//open account and take proporty from bank
void openAcc(bool free, struct moneyHouse bank[], int &count){
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
//deposite money. took proporty from bank
void deposite(int count, struct moneyHouse bank[]){
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
        else{
            cout<<"Try again"<<endl;
            cout<<endl;
        }
    }
}
//withdraw money and took proporty from bank
void withdraw(int count, struct moneyHouse bank[]){
    char key[10];
    int money;

    cout<<"Enter accout ID?= ";cin>>key;
    for (int i = 0; i < count; i++){
        if (strcmp(bank[i].id, key) == 0 && true){
            cout<<"Withdraw amount: ";cin>>money;
            if (bank[i].amount - money <100){
                cout<<"Less then 100"<<endl;
                break;
            }
            bank[i].amount -= money;
            cout<<setw(5)<<"ID: "<<bank[i].id<<endl;
            cout<<setw(5)<<"Name: "<<bank[i].name<<endl;
            cout<<setw(5)<<"Address: "<<bank[i].add<<endl;
            cout<<setw(5)<<"Balance: "<<bank[i].amount<<endl;
        break;
        }
        else{
            cout<<"ID not found"<<endl;
        }
                        
    }
}
//calculate compound and took proporty from bank
void compound(int count, struct moneyHouse bank[]){
    float year, rate, getRate, finale;

    cout<<"Enter your ID?= ";cin>>bank[count].id;
    for (int j= 0; j < count; j++){
        if (strcmp(bank[count].id, bank[j].id) == 0 && true)
        
        for (int i = 0; i < count; i++){
            cout<<"Rate?= : ";cin>>rate;
            cout<<"Years?= : ";cin>>year;
            getRate = (bank[i].amount * rate) / 100;
            finale = bank[i].amount + (getRate * year);
            cout<<setw(5)<<"Interest per year: "<<getRate<<endl;
            cout<<setw(5)<<"Current balance: "<<finale<<endl;
        }
        else{
            cout<<"ID not found"<<endl;
        }
        
    }
    
}
//summery of all accounts and took proporty from bank
void summ(struct moneyHouse bank[], int count){
    cout<<setw(40)<<" SUMMERY "<<endl;
    cout<<setw(20)<<" ID: ";
    cout<<setw(20)<<" NAME: ";
    cout<<setw(20)<<" ADDRESS: ";
    cout<<setw(20)<<" BALANCE: "<<endl;
    for (int i =0; i < count; i++){
        cout<<setw(20)<< bank[i].id;
        cout<<setw(20)<< bank[i].name;
        cout<<setw(20)<<bank[i].add;
        cout<<setw(20)<<bank[i].amount<<endl;
    }


}
int main(){
    struct moneyHouse bank[500];
    int menuSelect = -1;
    int count = 0;
    bool free = false;

    while (true){
        int select = menu(menuSelect);

        if (select == 6){
            break;
        }

        switch (select){
            case 1:{
                openAcc(free,bank ,count);
            }
            break;
            case 2:{
                deposite(count, bank);
            }
            break;
            case 3:{
                withdraw(count, bank);
            }
            break;
            case 4:{
                compound(count, bank);
            }
            break;
            case 5:
            {
                summ(bank, count);
            }
        }

    }
}

