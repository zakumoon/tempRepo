#include <iostream>
#include <cstring>
using namespace std;
class Birth{
  private:
    int day, month, year;
  public:
      Birth(){

      day = 0;
      month = 00;
      year = 2332;
    }
    void set(int d, int mm, int yr){
      day = d; 
      month = mm; 
      year = yr;
    }
    void setBirth(int dd, int mm, int yy){
      set(dd, mm, yy);
    }
    int getDay(){
      return day;
    }
    int getMonth(){
      return month;
    }
    int getYear(){
      return year;
    }

    ~Birth(){
    cout<<"Birth class endl~ "<<endl;
  }

};
class Addr{
  int road, zip; 
  string city;
  public:
    Addr(){
      road = 343;
      city = "Bangkok";
      zip = 430432;
    }
    void set(int r, int z, string ct){
      road = r;
      city = ct;
      zip =  z;
    }
    void setAddr(int rd, int zp, string cty){
      set(rd, zp, cty);
    }
    int getRoad(){
      return road;
    }
    string getCity(){
      return city;
    }
    int getZip(){
      return zip;
    }

  ~Addr(){
    cout<< "Clas Address end~ " << endl;
  }
};
class Person: public Birth, public Addr{
  string name;
  int age;
  public:

    Person(){
      age = 0;
      name = ("fullName");
    }
    void set(string nam, int nAge){
      name = nam;
      age = nAge;
    }
    
  void setStudentInfo(string name, int age){
    set(name, age);
  }
  string getName(){
    return name;
  }
  int getAge(){
    return age;
  }
  ~Person(){
    cout<<"Person class end~ " <<endl;
  }
};

class Teacher: public Person{
  int experience;
  public:
    Teacher(){
      experience = 0;
    }
    void setTeach(string nam, int nAge){
      Person::set(nam, nAge);
    }
    void setExp(int nExp){
      experience = nExp;
    }
    int getExp(){
      return experience;
    }
    void show(){
      cout<<"Your Name = " << getName()<<endl;
      cout<<"Your Age = " << getAge()<<endl;
      cout<<"Your Birth Date = " <<getDay()<<"/"<<getMonth()<<"/" <<getYear()<<endl;
      cout<<"Your Experience = " << getExp()<<endl;
      cout<<"Your Address = "<<getRoad()<< " "<<getCity()<< " "<<getZip()<<endl; 
      cout<< " ---------------End Student--------------- \n";

      cout<<endl;
    }
  ~Teacher(){
    cout<<"Teacher class end~ "<<endl;
  }
};

class Student: public Person{
  string id;
  public:
    Student(){
      id = "T01";
    }
    void setStudent(string nam, int nAge) {
      Person::set(nam, nAge); // Call base class set function
    }
    void setId(string nId){
      id = nId;
    }
    string getId(){
      return id;
    }
    void show(){
      cout<<"Your Student ID Number = " << getId()<<endl;
      cout<<"Your Name = " << getName()<<endl;
      cout<<"Your Age = " << getAge()<<endl;
      cout<<"Your Birth Date = " <<getDay()<<"/"<<getMonth()<<"/" <<getYear()<<endl;
      cout<<"Your Address = "<<getRoad()<< " "<<getCity()<< " "<<getZip()<<endl; 
      cout<< " ---------------End Teacher--------------- \n";

      cout<<endl;
    }
  ~Student(){
    cout<<"Teacher class end~ "<<endl;
  } 
};

int main(){
    Teacher *teacher = new Teacher();
    Student *student = new Student();

    teacher->setTeach("Mr.Bean", 22);
    teacher->setBirth(14, 2, 1409);
    teacher->setAddr(754, 80808, "Thung Song");
    teacher->setExp(10);

    student->setStudent("Jane Smith", 20);
    student->setBirth(10, 12, 1509);
    student->setAddr(381, 80345, "Surathani");
    student->setId("T105003221");

    cout << "Teacher's Information:" << endl;
    teacher->show();

    cout << "Student's Information:" << endl;
    student->show();

    delete teacher;
    delete student;
}
