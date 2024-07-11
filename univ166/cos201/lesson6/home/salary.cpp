#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

struct monthly
{
    char name[15];
    int job;
    int degree;
};

int main(){
    struct monthly salary[120];
    float finalIC = 0;
    float jobBon, eduBon;
    int count = 0;
    float baseIC = 3000;
    int select = -1;
    while (true){
        cout<<setw(5)<<"MENU"<<endl;
        cout<<"<1>Register"<<endl;
        cout<<"<2>Summery"<<endl;
        cout<<"<3>Quit"<<endl;
        cout<<"Select <1> <2> or <3>: ";
        cin>>select;
        count++;


        if (select == 3){
            break;
        }

        switch (select){
            case 1:
            {

                for (int i = 0; i< count; i++){
                    cout<<"Enter your name please: ";
                    cin>>salary[i].name;
                    cout<< "Enter Your job: "<<endl;
                    cout<<" <1> Registress"<<endl;
                    cout<<" <2> Nurse"<<endl;
                    cout<<" <3> Doctor"<<endl;
                    cout<<" 1 2 or 3: ";
                    int jobIn;
                    cin>>jobIn;
                    salary[i].job = jobIn;

                        switch (jobIn){
                            case 1:
                            {
                                jobBon = baseIC * 0;
                            }
                            break;
                            case 2:
                            {
                                jobBon =baseIC* 0.05;
                            }
                            break;
                            case 3:
                            {
                                jobBon = baseIC* 0.15;
                            }
                            break;
                        }

                    cout<< "Enter Your Education: "<<endl;
                    cout<<" <1> ป.ว.ช "<<endl;
                    cout<<" <2> ป.ว.ส "<<endl;
                    cout<<" <3> ป.ตรี "<<endl;
                    cout<<" 1 2 or 3: ";
                    int eduIn;
                    cin>>eduIn;
                    salary[i].degree = eduIn;
                        switch (eduIn){
                            case 1:
                            {
                                eduBon = baseIC * 0;
                            }
                            break;
                            case 2:
                            {
                                eduBon =baseIC* 0.05;
                            }
                            break;
                            case 3:
                            {
                                eduBon = baseIC* 0.15;
                            }
                            break;
                    }
                    finalIC = baseIC + jobBon + eduBon;
                    cout<<salary[i].name<<" Income is "<<finalIC<<endl;
                }

            }//endof case 1
            break;
            case 2:
            {
                cout<<setw(15)<<"Name ";
                cout<<setw(15)<<"Income "<<endl;
                for (int j = 0; j < count; j++){
                    cout<<setw(15)<<salary[j].name;
                    cout<<setw(15)<<finalIC<<endl;
                }

            }
            break;

        }

    }
    return 0;
}
