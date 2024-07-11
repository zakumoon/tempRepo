#include <iostream>


using namespace std;

class Point{
        string name;
        int x;
        double y;
    public:

    //defualt constructor
        Point(){
            set("NN", 0, 0);
        }
        void set(string n, int xx, double xy){
            name = n;
            x = xx;
            y = xy;
        }
        //const parame
        Point(string name){
            set(name, 0, 0);
        }
        Point(string name, int x){
            set(name, x, 0);
        }
        Point(string name, int x, double y){
            set(name, x, y);
        }
        //get those data
        string getName(){
            return name;
        }
        int getX(){
            return x;
        }
        double getY(){
            return y;
        }

    void show(void);
    ~Point(){
        cout<<" Bye name: " << name<<endl;

    }
};
void Point::show(){
    cout<<" Hello "<< getName()<<endl;

}
int main(){
    
    Point all;
    Point test1("test1");
    Point test2("test2", 4);
    Point test3("test3", 4, 3.4);

    all.show();
    test1.show();
    test2.show();
    test3.show();

    
    
}