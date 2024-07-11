#include <iostream>
#include <fstream>
using namespace std;

int main(){
    fstream myFile;
    myFile.open("/home/zk/testFile1.txt", ios::out); //output
    if (myFile.is_open()){
        myFile <<"this is test from lmao\n";
        myFile <<"this is second test from lamod:\n";
        myFile.close();
    }
#if 0
    myFile.open("/home/zk/Downloads/demo/text/class.txt", ios::app); //output
    if (myFile.is_open()){
        myFile <<"this is test from lmao\n";
        myFile <<"this is second test from lmao\n";
        myFile.close();
    }
#endif
    system("pause>0");
    
}
