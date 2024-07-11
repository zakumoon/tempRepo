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
        void setName(string nm){
            name = nm;
        }
        void setWid(double w){
            wid = w;
        }
        void setLen(double l){
            len = l;
        }

        //set wid and lens to whatever coming
        void fillAll(string ne , double w, double l){
            name = ne;
            wid = w;
            len = l;
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

    Ractangle a3("Test3", 33, 55.5);
    a3.setName("Test3");
    a3.setWid(33);
    a3.setLen(55.5);
    cout<<" Count: "<< a3.count()<< endl;
    cout<<" getName: "<< a3.getName() << endl;
    cout<<" getWidth: "<< a3.getWid() << endl;
    cout<<" getLength: "<< a3.getLen() << endl;
    a3.show();
}