#include <iostream>
using namespace std;

class Rectangle {
    int width, length;

public:
    Rectangle() {
        length = 1; width = 1;
    }
    Rectangle (int a, int b){
      width = a;
      length = b;
    }

    void setWid(int wid) { width = wid; }

    void setLen(int len) { length = len;}

    int getWidth() { return width;}

    int getLength() { return length;}

    void show();
};

void Rectangle::show() {
    cout << " Width = " << getWidth() << " + Length = " << getLength() << endl;
    int final = getWidth() * getLength();
    cout << "Square Area = " << final; 
    cout << "   &   Square Final = " << 2*final << endl;  
}

class myReact {
    int row, col;
    Rectangle **link;

    
    void getdata(int r, int c) {
      //make dynamic array of object form ex3.7
      row = r; col = c;
      link = new Rectangle *[row];
        for (int i = 0; i< row; i++){
            link[i] = new Rectangle[col];
        } 
    }
  

  public:
    myReact() {
        row = 1;
        col = 1;
        link = 0;
    }
    myReact(int a, int b){
      row = a; col = b; 
      getdata(row, col);
      set();
    }
  void setT(int r, int c, Rectangle rec){
    link[r][c] = rec;
  }
  void setT(int w, int l, int r, int c){
    link[r][c].setWid(w);
    link[r][c].setLen(l);
    cout<<"--------------NEW VALUE------------ "<<endl;
  }
    
    void set(){
      for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            int wid, len;
              cout << "Input width of [" << i << "][" << j << "] = ";
              cin >> wid;
              link[i][j].setWid(wid);

              cout << "Input length of [" << i << "][" << j << "] = ";
              cin >> len;
              link[i][j].setLen(len);
          }
      }
    }
    void arrShow();
    void reset(int a, int b);

    Rectangle getSet(int i, int j){
      cout<<"["<<i<<"]["<<j<<"] = ";
      return link[i][j];

    }

    ~myReact(){
        if (link!= 0){
          for (int i = 0; i < row; i++){
            delete[] link[i];
          }
          delete[] link;        }
        cout<<"Bye "<<endl;
    }
};

void myReact::reset(int r, int c){
  for (int i = 0; i < row; i++){
    delete[] link[i];
  }
  delete[] link;
  row = r;
  col = c;
  getdata(row, col);
  cout<<"--------reset------"<<endl;
  set();
}

void myReact::arrShow(){
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "Square " << i+1 << endl;
            //cout << "Width = [" << i << "][" << j << "] = " << link[i][j].getWidth() << endl;
            //cout << "Length = [" << i << "][" << j << "] = " << link[i][j].getLength() << endl;
            link[i][j].show();
            cout << endl;
        }
    }
}

int main(){
    Rectangle a{5, 6};

    myReact marr(2, 2);
    marr.arrShow();
    cout<<"Swt  ----------------"<<endl;
    marr.setT(99, 99, 0, 1);
    marr.getSet(0, 1).show();
    
    marr.reset(2,1);
    marr.arrShow();
    cout<<"------New Value of Reset----------"<<endl;

  //  marr.setT(11, 11, 0, 1);

    marr.setT(0, 0, a);
     a = marr.getSet(0,0);
     a.show();


    return 0;
}
