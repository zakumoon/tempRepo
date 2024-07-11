#include <iostream>

using namespace std;

class Rectangle{
    private:
        static int n;
        string name;    //used for remembering names
        double wid;
        double len;
    public:
        //constructor
        Rectangle(){
            name = "NN";
            wid = 1;
            len = 1;
            n++;
        }
        Rectangle(string name){
            fillAll(name, 1, 1);
            n++;
        }
        Rectangle(string name, int wid){
            fillAll(name, wid, 1);
            n++;
        }
        Rectangle(string name, int wid, double len){
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
        void show(void);        


        //set wid and lens to whatever coming
        void fillAll(string ne , double w, double l){
            name = ne;
            wid = w;
            len = l;
        }
        ~Rectangle(){
            n--;
            cout<<"Count: " << count() <<endl;;
            cout<<"Bye "<< getName() <<endl;
            cout<<endl;
        }

        //return counting
        static int count(){
            return n;
        }

        // pre add 1 wid
        Rectangle& operator++() {
            ++wid;
            return *this;
        }
        //post add 1 len
        Rectangle operator++(int) {
            Rectangle temp = *this;
            len++;
            return temp;
            }
            //pre minus 1 wid
        Rectangle& operator--() {
                --wid;
            return *this;
        }
            //pst minus 1 len
        Rectangle operator--(int) {
            Rectangle temp = *this;
                len--;
            return temp;
        }
};
     

// cout num cout
int Rectangle::n;

//show **its inside class
void Rectangle::show(){
    cout<<" width : "<< getWid()<<endl;
    cout<<" length : "<< getLen()<<endl;
    cout<<" Width * length : "<< squareArea()<<endl;
    cout<<" Final : "<< squarefinal()<<endl;
    cout<<endl;
}   


//main
int main(){
    cout<<" Count: "<< Rectangle::count()<< endl;
    cout<<endl;

    Rectangle a;
    a.setName("Test");
    a.setWid(2);
    ++a;                         //pre add wid here
    a.setLen(5);
    a--;                        //post minus len here;

    cout<<" Count: "<< a.count()<< endl;
    cout<<" getName: "<< a.getName() << endl;
    cout<<" getWidth: "<< a.getWid() << endl;
    cout<<" getLength: "<< a.getLen() << endl;
    a.show();

    Rectangle a1("Test1");
    a1.setName("Test1");
    a1.setWid(22);
    ++a1;                         //pre add wid here
    a1.setLen(33);
    a1--;                        //post minus len here;
    cout<<" Count: "<< a1.count()<< endl;
    cout<<" getName: "<< a1.getName() << endl;
    cout<<" getWidth: "<< a1.getWid() << endl;
    cout<<" getLength: "<< a1.getLen() << endl;
    a1.show();

    Rectangle a2("Test2",33.3);
    a2.setName("Test2");
    a2.setWid(33.3);
    ++a2;                           //pre add wid here
    a2.setLen(1);
    a2--;                        //post minus len here;
    cout<<" Count: "<< a2.count()<< endl;
    cout<<" getName: "<< a2.getName() << endl;
    cout<<" getWidth: "<< a2.getWid() << endl;
    cout<<" getLength: "<< a2.getLen() << endl;
    a2.show();

    Rectangle a3("Test3", 33, 55.5);
    a3.setName("Test3");
    a3.setWid(33);
    ++a3;                           //pre add wid here
    a3.setLen(55.5);
    a3--;                        //post minus len here;
    cout<<" Count: "<< a3.count()<< endl;
    cout<<" getName: "<< a3.getName() << endl;
    cout<<" getWidth: "<< a3.getWid() << endl;
    cout<<" getLength: "<< a3.getLen() << endl;
    a3.show();
}
