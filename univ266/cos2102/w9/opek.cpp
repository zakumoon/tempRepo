#include <iostream>

class MyClass {
    int x;
    int *a;
public:
    MyClass() {
        this->x = 0;
        this->a = nullptr;
        std::cout << "Constructor\n";
    }

    ~MyClass() {
        deleteA();
        std::cout << "Destructor\n";
    }

    void setX(int i) {
        deleteA();
        if(i > 0) {
            this->x = i;
            this->a = new int[i];
            std::cout << "setX = " << i << "\n";
        } else {
            this->x = 0;
        }
    }

    void setA(int i, int v) {
        if (i >= 0 && i < this->x) {
            this->a[i] = v;
            std::cout << "setA[" << i << "] = " << v << "\n";
        }
    }

    void deleteA() {
        if (this->a != nullptr) {
            delete[] a;
            a = nullptr;
            std::cout << "deleteA()" << "\n";
        }
    }

    void showA() {
        if (this->a != nullptr) {
            for (int i = 0; i < x; ++i) {
                std::cout << "A[" << i << "] = " << this->a[i] << "\n";
            }
            std::cout << std::endl;
        }
    }
};
int main(){
  MyClass myObject;
    myObject.setX(5);
    myObject.setA(0, 1);
    myObject.setA(1, 2);
    myObject.setA(2, 3);
    myObject.showA();
  
}