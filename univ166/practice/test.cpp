#include <iostream>
using namespace std;

struct Employee {
    int sex;
    int age;
    int stat;
    int degr;
    int exp;
    Employee* next;
};

Employee* head = nullptr;

void addEmployee() {
    Employee* newEmployee = new Employee;
    
    cout << "1 = male & 2 = female: "; 
    cin >> newEmployee->sex;
    
    cout << "Enter your age: "; 
    cin >> newEmployee->age;
    
    cout << "1 = married & 2 = unmarried or more: "; 
    cin >> newEmployee->stat;
    
    cout << "1 = bachelor, 2 = master & 3 = phd: "; 
    cin >> newEmployee->degr;
    
    cout << "Your experience year: "; 
    cin >> newEmployee->exp;
    
    newEmployee->next = head;
    head = newEmployee;
}

void displayEmployees() {
    Employee* current = head;
    
    while (current != nullptr) {
        cout << "Sex: " << current->sex << ", Age: " << current->age << ", Status: " << current->stat
             << ", Degree: " << current->degr << ", Experience: " << current->exp << endl;
        current = current->next;
    }
}

int main() {
    int numEmployees;
    cout << "Enter the number of employees: ";
    cin >> numEmployees;
    
    for (int i = 0; i < numEmployees; ++i) {
        addEmployee();
    }
    
    cout << "\nEmployee Information:\n";
    displayEmployees();
    
    // Don't forget to free memory when you're done!
    Employee* current = head;
    while (current != nullptr) {
        Employee* temp = current;
        current = current->next;
        delete temp;
    }
    
    return 0;
}

