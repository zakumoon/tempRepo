#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct emp {
	int sex;
	int age;
	int stat;
	int degr;
	int exp;
	struct emp *next;
};
void getMenu(emp *&head, int n){
	for (int i = 0; i < n; i++){
		emp *getInfo = new emp;
			cout<<i+1<<") 1: male & 2: female: "; cin>>getInfo->sex;
			cout<<i+1<<") Age: "; cin>>getInfo->age;
			cout<<i+1<<") 1: single, 2: married & 3: other: "; cin>>getInfo->stat;
			cout<<i+1<<") 1: bachaler, 2: master & 3: PHD: "; cin>>getInfo->degr;
			cout<<i+1<<") Experiences: "; cin>>getInfo->exp;
		getInfo->next = head;
		head = getInfo;

	
	}
}
void employeeDisplay(emp *&head, int n, int& avgAge, int& avgExp){
    struct emp *empDisplay = head;
    cout << setw(10) << "Employee" << endl;

    while (empDisplay != NULL){
        cout << "Sex: " << empDisplay->sex << endl;
        cout << "Age: " << empDisplay->age << endl;
        cout << "Status: " << empDisplay->stat << endl;
        cout << "Education: " << empDisplay->degr << endl;
        cout << "Experience: " << empDisplay->exp << endl;
        avgAge = avgAge + empDisplay->age;
        avgExp = avgExp + empDisplay->exp;

        empDisplay = empDisplay->next;
    }
}


int main(){
	emp *data = nullptr;
	cout<<"Enter num of employee: ";
	int n;
	cin>>n;
	int avgAge =0, avgExp=0;

	getMenu(data, n);
	employeeDisplay(data, n, avgAge, avgExp);
		
	avgAge = avgAge / n;
	avgExp = avgExp / n;
	cout<<"avgAge: "<<avgAge<<endl;
	cout<<"avgExp: "<<avgExp<<endl;

	while (data != NULL){
		emp *bait = data;
		data = data->next;
		delete bait;		
	}

return 0;	
}

