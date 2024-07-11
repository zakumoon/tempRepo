#include <iostream>
#include <string>

using namespace std;

class Circle;
class Point{
  private:
    double x, y;
  public:
    Point(){
      x= y = 4;
    }
    Point(double xn, double yn){
      x = xn; y = yn;
    }
    void set(double xn, double yn){ 
      x = xn;
      y = yn;
    }

    double getX(){
      return x;
    }
    double getY(){
      return y;
    }

    friend bool inside(Circle, Point); 

    ~Point(){
      cout<<"Point class End."<< endl;
    }
};
class Circle{
  Point midPoint; 
  double radi;

  public:
    Circle(){
      radi = 10;
      midPoint.set(0, 0); // form point class void set(xn yn)
    }
    void set(double r){
      radi = r;
    }
    void setMidPoint(Point &z){
      midPoint = z;
    }
    void setMid(double xn, double yn){
      midPoint.set(xn, yn);
    }
    Point getMP(){
      return midPoint;
    }
    Point midPoint(Point &xn, Point &yn) {
      double midX = (xn.getX() + yn.getX()) / 2;
      double midY = (xn.getY() + yn.getY()) / 2;
      
      return Point(midX, midY);
    }

    friend bool inside(Circle, Point); 
 
    ~Circle(){
      cout<< "Circle class End~" <<endl;
    }
};



bool inside(Circle rad, Point cen){
   // double distance = (cen.getX() * cen.getX() + cen.getY() * cen.getY());
  double distance = (cen.x * cen.x + cen.y * cen.y);
  double radius = rad.radi * rad.radi;

  if (distance < radius){
    return true;
  }
  else{
    return false;
  }
}

int main(){
  Circle cir;
  Point dot;
  Point mid(5, 5);
  
  cir.set(10);
  double x, y;
  cout << "Enter your point X: "; cin>>x;
  cout << "Enter your point Y: "; cin>>y;
  cout<<endl;
  dot.set(x, y);
  
  Point circleMid = cir.setMid(mid, dot);
  cir.setMidPoint(circleMid);
  
  bool real = inside(cir, dot);
  if(real){
    cout<<"\n----------->It's INSIDE the circle.<-------------\n"<<endl;
  }else{
    cout<<"\n----------->It's OUTSIDE the circle.<-------------\n"<<endl;
  }
}