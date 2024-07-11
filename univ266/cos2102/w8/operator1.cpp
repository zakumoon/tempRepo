#include <iostream>
using namespace std;

class Ractangle{
    private:
        static int n;
        string name;    //used for remembering names
        double wid;
        double len;
    public:
      //constructor
      Ractangle(){
        name = "NN";
        wid = 1;
        len = 1;
        n++;
      }
      Ractangle(string name){
        fillAll(name, 1, 1);
        n++;
      }
      Ractangle(string name, int wid){
          fillAll(name, wid, 1);
          n++;
      }
      Ractangle(string name, int wid, double len){
        fillAll(name, wid, len);
        n++;
      }
          //set wid and lens to whatever coming
      void fillAll(string ne , double w, double l){
          name = ne;
          wid = w;
        len = l;
      }
      void setName(string nm){
        name = nm;
      }
      void setWid(double w){
        wid = w;
      }
      void setLen(double l){
        len = l;
      }
      
      double getWid(){
        return wid;
      }
      double getLen(){
        return len;
      }
      string getName(){
        return name;
      }
      //do maths 
      double squareArea(){
        return wid * len;
      }
      double squarefinal(){
          return 2*squareArea();
      }


      //operator funtions are that compare wid betweens the different objects for 8.3 
      bool operator<( Ractangle& other) {
        return wid < other.wid;
      }
      bool operator<=( Ractangle& other) {
        return wid <= other.wid;
      }
      bool operator>( Ractangle& other) {
        return wid > other.wid;
      }
      bool operator>=( Ractangle& other) {
        return wid >= other.wid;
      }
      bool operator!=( Ractangle& other) {
        return wid != other.wid;
      }

      void show(void);

      //destroyer
      ~Ractangle(){
        n--;
        cout<<"Count: " << count() <<endl;;
        cout<<"Bye "<< getName() <<endl;
        cout<<endl;
      }

        //return counting
    static int count(){
      return n;
    }
};

// cout num cout
int Ractangle::n;

//show **its inside class
void Ractangle::show(){
    cout<<" width : "<< getWid()<<endl;
    cout<<" length : "<< getLen()<<endl;
    cout<<" Width * lenght : "<< squareArea()<<endl;
    cout<<" Final : "<< squarefinal()<<endl;
    cout<<endl;

}   


//main
int main(){
  cout<<" Count: "<< Ractangle::count()<< endl;
  cout<<endl;

  Ractangle a;
  a.setName("Test");
  a.setWid(2);
  a.setLen(5);
  cout<<" Count: "<< a.count()<< endl;
  cout<<" getName: "<< a.getName() << endl;
  cout<<" getWidth: "<< a.getWid() << endl;
  cout<<" getLength: "<< a.getLen() << endl;
  a.show();

  Ractangle a1("Test1");
  a1.setName("Test1");
  a1.setWid(22);
  a1.setLen(33);
  cout<<" Count: "<< a1.count()<< endl;
  cout<<" getName: "<< a1.getName() << endl;
  cout<<" getWidth: "<< a1.getWid() << endl;
  cout<<" getLength: "<< a1.getLen() << endl;
  a1.show();

  Ractangle a2("Test2",33.3);
  a2.setName("Test2");
  a2.setWid(33.3);
  a2.setLen(1);
  cout<<" Count: "<< a2.count()<< endl;
  cout<<" getName: "<< a2.getName() << endl;
  cout<<" getWidth: "<< a2.getWid() << endl;
  cout<<" getLength: "<< a2.getLen() << endl;
  a2.show();

  Ractangle a3("Test3", 11, 55.5);
  a3.setName("Test3");
  a3.setWid(11);
  a3.setLen(55.5);
  cout<<" Count: "<< a3.count()<< endl;
  cout<<" getName: "<< a3.getName() << endl;
  cout<<" getWidth: "<< a3.getWid() << endl;
  cout<<" getLength: "<< a3.getLen() << endl;
  a3.show();
  
  //operator funtions here 
  //comparing wid of a3(11) & a1(22) So the output should be a1 bigger then a3
  if (a3<a1){
    cout << a1.getName() << " is bigger than " << a3.getName() << endl;
  } else {
  cout << a3.getName() << " is bigger or equal to "<<a3.getName()<< endl;
  }

  //less then or equal to
  //comparing wid of a3(11) & a1(22) So the output should be a1 is bigger or eqal to a3
  if (a3<=a1){
    cout << a1.getName() << " is bigger or eqal to "<<a3.getName()<< endl;
  } else {
  cout << a3.getName() << " is bigger than "<< a1.getName() << endl;
  }

  //more then 
  //comparing wid of a2(33,3) & a1(22) So the output should be a2 is bigger or equal to a1
  if (a1>a2){
    cout << a1.getName() << " is bigger then "<< a2.getName() << endl;
  } else {
  cout << a2.getName() << " is bigger or equal to "<< a1.getName() << endl;
  }
  
  //less then or equal to
  //comparing wid of a2(33.3) & a1(22) So the output should be a2 is bigger or equal to a1
  if (a1>=a2){
    cout << a1.getName() << " is bigger or equal to "<< a2.getName() << endl;
  } else {
  cout << a2.getName() << " is bigger than "<< a1.getName() << endl;
  }

  //not equal to
  //comparing wid between a3(11) & a2(33.3) So the output should be a2 isnt equal to a3
  if (a3!=a2){
    cout << a3.getName() << " isn't equal to "<< a2.getName() << endl;
  } else {
  cout << a2.getName() << " is equal to "<< a3.getName() << endl;
  
  }
  cout<<endl;

  return 0;
}