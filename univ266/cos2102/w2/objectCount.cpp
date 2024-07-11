#include <iostream>


using namespace std;

class Point{
    private:
        static int num;
        string name;
        int x;
        double y;
    public:

    //defualt constructor
        Point(){
            set("NN", 0, 0);
            num++;
        }
        void set(string n, int xx, double xy){
            name = n;
            x = xx;
            y = xy;
        }
        //const parame
        Point(string name){
            set(name, 0, 0);
            num++;
        }
        Point(string name, int x){
            set(name, x, 0);
            num++;
        }
        Point(string name, int x, double y){
            set(name, x, y);
            num++;
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
        num--;
        cout<<" Bye name: " << name;
        cout<<" | Num: "<<Point::count()<<endl;

        

    }
    static int count(){
        return num;
    }
};

int Point::num;

void Point::show(){
    cout<<" Hello "<< getName();


}
int main(){

    cout<<" Num: "<<Point::count()<<endl;
    Point all;
    all.show();
    cout<<" | Num: "<<Point::count()<<endl;

    Point test1("test1");
    test1.show();
    cout<<" | Num: "<<Point::count()<<endl;

    Point test2("test2", 4);
    test2.show();
    cout<<" | Num: "<<Point::count()<<endl;

    Point test3("test3", 4, 3.4);
    test3.show();
    cout<<" | Num: "<<Point::count()<<endl;

return 0;    
}