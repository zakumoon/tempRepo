#include <iostream>
#include <string.h>
#include <iomanip>

struct shop
{
    char id[10];
    char name[10];
    float cost;
    int stock;
};

int main()
{
    struct shop item[100];
    int count = 0;
    int select = -1;
    bool same = false;
    char save[] = {-1};

    while (true)
    {
        std::cout <<std::setw(13)<< " MENU " << std::endl;
        std::cout << "1. Add item to cart " << std::endl;
        std::cout << "2. Sell product " << std::endl;
        std::cout << "3. Check product " << std::endl;
        std::cout << "4. Close shop : " << std::endl;
        std::cout << " Select 1, 2, 3 or 4: ";
        std::cin >> select;

        std::cout << std::endl;

        if (select == 4)
        {
            break;
        }
        switch (select)
        {
            case 1:
            {
                std::cout << " NEW PRODUCT" << std::endl;  
                
                std::cout << "ID: ";
                std::cin >> item[count].id;          

                for (int i = 0; i< count; i++){
                    if (strcmp(item[count].id, item[i].id) == 0){
                        same = true;
                        std::cout<<"Try again"<<std::endl;
                        std::cout<<std::endl;

                    }
                    break;
                }
                if (!same){
                    std::cout << "Name: ";
                    std::cin >> item[count].name;
                    std::cout << "Price: ";
                    std::cin >> item[count].cost;
                    std::cout << "Stocks: ";
                    std::cin >> item[count].stock;
                count++;
                }    
            }
            break;
            case 2:
            {
                int amount, i;
                char key[10];

                std::cout << "How many items do you want: ";
                std::cin >> amount;
                std::cout << "Enter item ID: ";
                std::cin >> key;
                

                for (i = 0; i < count; i++)
                {
                    if(strcmp(key, item[i].id) != 0 && false){
                        std::cout<<"Id is not match"<<std::endl;
                    }
                    if (strcmp(key, item[i].id) == 0 && true){
                
                        std::cout << "ID: " << item[i].id << std::endl;
                        std::cout << "Item: " << item[i].name << std::endl;
                        std::cout << "Price: " << item[i].cost << std::endl;
                        std::cout << "Total: " << amount * item[i].cost << std::endl;

                        item[i].stock -= amount;
                    break;
                    }
                    
                }
            }
            break;
            case 3:
            {
                std::cout << std::setw(15) << "ID: ";
                std::cout << std::setw(15) << "Name: ";
                std::cout << std::setw(15) << "Cost: ";
                std::cout << std::setw(15) << "Stock: " << std::endl;
                for (int i = 0; i < count; i++)
                {
                    std::cout << std::setw(15) << item[i].id;
                    std::cout << std::setw(15) << item[i].name;
                    std::cout << std::setw(15) << item[i].cost;
                    std::cout << std::setw(15) << item[i].stock << std::endl;
                }
            }
            break;
            
        }
    }
    return 0;
}