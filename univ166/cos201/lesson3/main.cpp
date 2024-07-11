#include <iostream>
#if 0
//for loop
int main()
{
    int num, fac;
    fac = 1;

    std::cout<<"Put you fac num: ";
    std::cin>>num;
    
    for (int i = 1; i <= num; i++){
        fac *= i;
    }
    std::cout<<"\nfac = "<<fac<<std::endl;
    return 0;

}
#endif
#if 0
//while loop
int main(){
    int fac, num;
    fac =1;
    std::cout<<"enter num: ";
    std::cin>>num;

    while (num >0){
        fac = fac * num; num--;
    }
    std::cout<< fac<<std::endl;
    return 0;

}
#endif
#if 0
//do while loop

int main(){
    int fac, num;
    fac =1;

    std::cout<<"enter num: ";
    std::cin>>num;
    do{
    fac = fac * num;
    num--;
    std::cout<<fac<<std::endl;
}while (num > 0);
return 0;
}
#endif

int main(){
    
}