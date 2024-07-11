#include <iostream>
#include <iomanip>
#include <cstring> // Include this header for strcmp function

struct reserv
{
    char seatID[4]; // Adjusted the size to hold "1A" format
    char name[10];
    char tel[10];
    bool free;
};

int main() {
    struct reserv seat[8][4] = {
        { {"1A", true, "", ""}, {"1B", true, "", ""}, {"1C", true, "", ""}, {"1D", true, "", ""}},
        // ... initialize other rows similarly
    };
    char menuSelect = 0;

    do {
        int row, col;
        for (row = 0; row < 8; row++) {
            for (col = 0; col < 4; col++) {
                if (seat[row][col].free) { // Use comparison (==) instead of assignment (=)
                    std::cout << " | " << std::setw(3) << seat[row][col].seatID;
                } else {
                    std::cout << " | " << std::setw(3) << "* *";
                }
            }
            std::cout << std::endl;
        }

        std::cout << " MENU" << std::endl;
        std::cout << "<R> Reserve seat" << std::endl;
        std::cout << "<S> Summary seat" << std::endl;
        std::cout << "<Q> Quit" << std::endl;
        std::cout << "select R/S/Q ? ";
        std::cin >> menuSelect;

        switch (menuSelect) {
            case 'R':
            case 'r': {
                int inrwfound = -1, incolfound = -1;
                char selectSeat[3]; // Adjusted the size to hold "1A" format
                std::cout << "Enter your seat id: ";
                std::cin >> selectSeat;
                for (row = 0; row < 8 && inrwfound == -1; row++) {
                    for (col = 0; col < 4 && incolfound == -1; col++) {
                        if (strcmp(seat[row][col].seatID, selectSeat) == 0) {
                            inrwfound = row;
                            incolfound = col;
                        }
                    }
                }
                if (inrwfound != -1 && incolfound != -1) { // Check if a valid seat was found
                    seat[inrwfound][incolfound].free = false;
                    std::cout << "Your name: ";
                    std::cin >> seat[inrwfound][incolfound].name;
                    std::cout << "Tel: ";
                    std::cin >> seat[inrwfound][incolfound].tel;
                } else {
                    std::cout << "Invalid seat ID." << std::endl;
                }
            }
            break;
        }
    } while ((menuSelect == 'Q' || menuSelect == 'q') == false); // Use single quotes for characters

    return 0;
}
