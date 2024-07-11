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
    void setB(int d, int mm, int yr){
      day = d; 
      month = mm; 
      year = yr;
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
    void setA(int r, int z, string ct){
      road = r;
      city = ct;
      zip =  z;
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
  ~Addr(){cout<< "Clas Address end~ " << endl;}
};
class Person: public Birth, public Addr{
  string name;
  int age; 
  public: 

   Person(){
      age = 656;
      name = ("fullName");
    }
    void setInfo(string nam, int nAge){
      name = nam;
      age = nAge;
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
        Person::setInfo(nam, nAge);
    }
    void setExp(int nExp){
      experience = nExp;
    }
    int getExp(){
      return experience;
    }
    void show(){
      std::cout<<"Teacher Name = " <<getName()<<endl;
      std::cout<<"Teacher Age = " <<getAge()<<endl;
      std::cout<<"Teacher Birth Date = " <<getDay()<<"/"<<getMonth()<<"/" <<getYear()<<endl;
      std::cout<<"Teacher Experience = " << getExp()<<endl;
      std::cout<<"Teacher Address = "<<getRoad()<< " "<<getCity()<< " "<<getZip()<<endl; 
      std::cout<< "--------------- Teacher End--------------- \n";

      std::cout<<endl;
    }
  ~Teacher(){
    std::cout<<"Teacher class end~ "<<endl;
  }
};

class Student: public Person{
  string id;
  public:
    Student(){
      id = "T01";
    }
     void setStudent(string nam, int nAge) {
        Person::setInfo(nam, nAge); 
    }
    void setId(string nId){
      id = nId;
    }
    string getId(){
      return id;
    }
    void show(){
      std::cout<<"Student ID Number = " << getId()<<endl;
      std::cout<<"Student Name = " << getName()<<endl;
      std::cout<<"Student Age = " << getAge()<<endl;
      std::cout<<"Teacher Birth Date = " <<getDay()<<"/"<<getMonth()<<"/" <<getYear()<<endl;
      std::cout<<"Teacher Address = "<<getRoad()<< " "<<getCity()<< " "<<getZip()<<endl;
      std::cout<< "--------------- Student End--------------- \n";

      std::cout<<endl;
    }
  ~Student(){
    cout<<"Student class end~ "<<endl;
  }
};

class Assistant: public Student, public Teacher{
  public:
    void show(){
      std::cout<<"Assistant Student ID Number = "<<Student::getId()<<endl;
      std::cout<<"Assistant Name = "<<Student::getName()<<endl;
      std::cout<<"Assistant Age = "<<Student::getAge()<<endl;
      std::cout<<"Assistant Experience = "<<Teacher::getExp()<<endl;
      std::cout<<"Assistant Birth Date = "<<Teacher::getDay()<<"/"<<Teacher::getMonth()<<"/" <<Teacher::getYear()<<endl;
      std::cout<<"Assistant Address = "<<Teacher::getRoad()<< " "<<Teacher::getCity()<< " "<<Teacher::getZip()<<endl;
      std::cout<< "--------------- Assistant End--------------- \n";
      std::cout<<endl;
    }
  ~Assistant(){
    std::cout<<"Assistant class end~ "<<endl;
  }
};

int main(){
    Teacher *teacher = new Teacher();
    Student *student = new Student();
    Assistant *assist = new Assistant();


    teacher->setTeach("Mr.Bean", 22);
    teacher->setB(14, 2, 1409);
    teacher->setA(754, 80808, "Thung Song");
    teacher->setExp(10);

    student->setStudent("Jane Smith", 20);
    student->setB(10, 12, 1509);
    student->setA(381, 80345, "Surathani");
    student->setId("T105003221");

    assist->setStudent("Limy Franz", 23);

    cout << "Teacher's Information:" << endl;
    teacher->show();

    cout << "Student's Information:" << endl;
    student->show();

    cout << "Teacher's Assistance Information: "<<endl;
    assist->show();

    delete teacher;
    delete student;
    delete assist;
    return 0;
}
