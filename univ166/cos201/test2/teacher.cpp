#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct teacher {
	int sex;
	int age;
	int educ;
	int stat;
	int exp;

	struct teacher *next;
}

struct teacher *info = nullptr;

void add(int sex, int age, int educ, int stat, int exp){
	struct teacher *tech = new teacher;

	struct teacher *lead = info;
	struct teacher *fol = NULL;

	while (tech != NULL){
		if (lead->age > age){
			break;
		}
		fol = n;
		n = n->next;
	}
	if ( lead == head){
		tech->next = main;
		main = tech;
	}
	tech->next = fol;
	fol->next = lead;
}
void getInfo(){
	struct teacher *tech = info;
	cout<<"New Teacher"<<endl;
	cout<<"sex male1 female2? = "; cin>>tech->sex;
	cout<<"Age? = "; cin>>tech->sex;
	cout<<"Education b1 m2 p3? = "; cin>>tech->sex;
	cout<<"Status s1 m2 more3? = "; cin>>tech->sex;
	cout<<"Experience? = "; cin>>tech->sex;
	n++;
	cout<<endl;
	tech = tech->next;

	add(tech->sex, tech->age, tech->educ, tech->stat, tech->exp);
}
 void display(){
 	struct teacher *tech = info;
 	struct teacher *fol = NULL;
 		while (tech != null){
 			cout<<"Show Teacher"<<endl;
			cout<<"sex = "; cin>>tech->sex;
			cout<<"Age = "; cin>>tech->sex;
			cout<<"Education = "; cin>>tech->sex;
			cout<<"Status = "; cin>>tech->sex;
			cout<<"Experience = "; cin>>tech->sex;
			tech = tech->next;
 		}
 }

 void Twrite(){
 	struct teacher *tech = info;
 	FILE *fp = fopen(fel, "wt");

 	while (tech != NULL){
 		fwrite(fp, "%d %d %d %d %d", 
 			tech->sex, 
 			tech->age, 
 			tech->educ, 
 			tech->stat, 
 			tech->exp
 			);
 		}
 		fclose(fp);
 }

int getMenu(){
	int select = -1;

	cout << " Menu" << endl;
	cout << "1. Add " << endl;
	cout << "2. Check " << endl;
	cout << "3. Write  " << endl;
	cout << "4. End program" << endl;
	cout << "Please select 1/ 2/ 3/ 4=? ";
	cin >> select;
return select;
}

int main(){
	while (true){
		int c = getMenu();
		if(c == 4){
			break;
		}
		switch(c){
			case 1:{
				
				getInfo();
			}
			break;
			case 2: {
				display();
			}
			break;
			case 3:{
				iwrite("/home/zk/univ166/cos201/file/readLink.txt");
			}
			break;
		}
	}
	return 0;
}
