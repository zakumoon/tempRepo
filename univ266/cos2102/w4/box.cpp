#include <iostream>
using namespace std;

class box{
  public:
    int width;
    int height;
    int length;
  public:
     box(){
     width = 0; 
     height = 0;
     length = 0;
    }
    void set( int wid, int heig, int len){
      width = wid;
      height = heig;
      length = len;
    }
    void setInput(int wid, int heig, int len){ set(wid, heig, len);}
        int getWid(){return width;}
        int getheig(){return height;}
        int getLen(){return length;}
        int getResult(){ int result = getWid() * getheig()* getLen(); return result;}
        int getFinal(){return 2*getResult();}
 
      void dot(box &);
      void midPoint();
      void show(){
        cout<<"Width = " <<getWid()<<endl;
        cout<<"Height = " <<getheig()<<endl;
        cout<<"Length = " <<getLen()<<endl;
        cout<<"Ouput of w*h*l"<<getResult()<<endl;
        cout<<" final = "<<getFinal()<<endl;
      }
      ~box(){
        cout<<"Dies "<<endl;
      }
};
int main(){
  box a;
  a.setInput(3, 4, 5);
  a.show();
}
