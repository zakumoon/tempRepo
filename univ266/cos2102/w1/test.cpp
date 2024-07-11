#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
using namespace std;


class Test{
  private:
    char name[100];
    int user_id;
    double u_price;

  public:
    void setName(char *xname){
      strcpy(name, xname);
    }
    void setId(int xid){
      user_id = xid;
    }
    void setPrice(double xprice){
      u_price = xprice;
    }
  
  void show(void);
};

int getMenu(){
  int c;
  cout<< " 1 Add Item \n";
  cout<< " 2 Sell \n";
  cout<< " 3 show \n";
  cin>> c;
  return c;
}



void addItem(int id, char *name, double price){
  Test tc;
  tc.setId(id);
  tc.setName(name);
  tc.setPrice(price);

}

void addMenu(){
  int id;
  double price;
  char *name;
  cout<<"id "; cin>>id;
  cout<<"name"; cin>>name;
  cout<<"Price"; cin>>price;

  addItem(id, name, price);

}

void Test::show(){}


int main(){
  int count = 0;
  int menu = getMenu();
  do {
      menu;
      count++;
      
    switch (menu){
      case 1:{
              addMenu();
             }
      case 2:{

             }
    }
  } while (menu <= 0 || menu >= 4);
}
