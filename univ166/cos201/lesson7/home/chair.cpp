#include <iostream>
#include <string.h>
#include <iomanip>

struct seat
{
    char seatID[5];
    bool free;
    char name[20];
    char num[10];
};

int main(){    
    struct seat chair[8][4] = {
        { {"1A", true, "", ""}, {"1B", true, "", ""}, {"1C", true, "", ""}, {"1D", true, "", ""}},
		{ {"2A", true, "", ""}, {"2B", true, "", ""}, {"2C", true, "", ""}, {"2D", true, "", ""}},
		{ {"3A", true, "", ""}, {"3B", true, "", ""}, {"3C", true, "", ""}, {"3D", true, "", ""}},
		{ {"4A", true, "", ""}, {"4B", true, "", ""}, {"4C", true, "", ""}, {"4D", true, "", ""}},
		{ {"5A", true, "", ""}, {"5B", true, "", ""}, {"5C", true, "", ""}, {"5D", true, "", ""}},
		{ {"6A", true, "", ""}, {"6B", true, "", ""}, {"6C", true, "", ""}, {"6D", true, "", ""}},
		{ {"7A", true, "", ""}, {"7B", true, "", ""}, {"7C", true, "", ""}, {"7D", true, "", ""}},
		{ {"8A", true, "", ""}, {"8B", true, "", ""}, {"8C", true, "", ""}, {"8D", true, "", ""}},
};
        char menuSelect;

        int row, col;
        do {
            for (row = 0; row < 8; row++){
                for (col = 0; col< 4; col++){
                    if(chair[row][col].free == true)
                        std::cout<<" | "<<std::setw(3)<<chair[row][col].seatID;
                    else
                        std::cout<< " | "<<std::setw(3)<< " **";                        
                }
                std::cout<<std::endl;
            }
            
            std::cout<<"MENU"<<std::endl;
            std::cout<<"<R> Reserve Seat "<<std::endl;
            std::cout<<"<S> Summary "<<std::endl;
            std::cout<<"<Q> Quit"<<std::endl;
            std::cout<<"Chose <R> <S> or <Q>";
            std::cin>>menuSelect;


            switch (menuSelect)
            {
                case 'R':
                case 'r':
                {
                        int IRfound = -1 , ICfould = -1;    //inrowfound incolumnfound

                        char seatSelect[10];
                        std::cout<<"Enter your seat ID: ";
                        std::cin>>seatSelect;

                        for (row = 0; row < 8 && IRfound == -1; row++){
                            for (col = 0; col < 4 && ICfould == -1; col++){
                                if(strcmp(chair[row][col].seatID, seatSelect) == 0){
                                    IRfound = row;
                                    ICfould = col;
                                }
                            }
                        }
                        chair[IRfound][ICfould].free = false;
                        std::cout<<"Name: ";
                        std::cin>> chair[IRfound][ICfould].name;
                        std::cout<<"Tel: ";
                        std::cin>> chair[IRfound][ICfould].num;
                        
                }
                break;
                case 'S':
                case 's':{
                    for (row = 0; row < 8; row++){
                        for (col =0; col < 4; col++){
                            if(chair[row][col].free == true)
                                std::cout<<" | "<<std::setw(3)<<chair[row][col].seatID;
                            else
                                std::cout<< " | "<<std::setw(3)<< chair[row][col].name;
                                std::cout<< " ("<<std::setw(3)<< chair[row][col].num<<")";                        
                        }
                        std::cout<<std::endl;
                        }
                    }
                break;

            }
        }while((menuSelect == 'Q' || menuSelect == 'q' ) == false);


    
}
