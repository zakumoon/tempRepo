#include <iostream>
#include <iomanip>
#include <string.h>
#include <cstring>

using namespace std;

class Point{
    private:
        double x;
        double y;
        char cname[100];
        string sname;

    public:
        void setSname( string test){
            sname = test;
        }
        void setCname(char *test){
            strcpy(cname, test);
        }
        void setX(double ux){
            x = ux;
        }
        void setY(double uy){
            y = uy;
        }
        void set(char* xname, string hel, double ux, double xy){
            strcpy(cname , xname);
            sname = hel;
            x = ux;
            y = xy;
        }
        char* getCname(){
            return &cname[0];
        }
        string getSname(){
            return sname;
        }
        double getX(){
            return x;
        }
        double getY(){
            return y;
        }

        void show(void);
};

void Point::show(){
    cout<<"Befoere Char name: "<<cname<<endl;
    cout<<"Before string name: "<<sname<<endl;
    cout<<"Before x : "<<x<<endl;
    cout<<"Before Y : "<<y<<endl;

}
int main(){
    Point doSomething;
    doSomething.setX(3);
    doSomething.setY(5);
    doSomething.setSname("Hello");
    doSomething.setCname((char *)"Hello");
    doSomething.show();
    doSomething.set((char *)"Who", "Who", 99.4, 404);

    cout<<"After Cname: "<<doSomething.getCname()<<endl;
    cout<<"After Sname: "<<doSomething.getSname()<<endl;
    cout<<"After getX: "<<doSomething.getX()<<endl;
    cout<<"After getY: "<<doSomething.getY()<<endl;  

return 0;
}

