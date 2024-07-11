#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

char com(){
    srand((unsigned)time(NULL));
    int move = rand()%3;

    if (move == 0){
        return 'r';
    }
    else if (move == 1){
        return 'p';
    }else{
        return 's';
    }
}
int result(char user, char computer){
     if (user == computer) { 
        return 0; 
    } 
  
    // condition for win and loss according to game rule 
    if (user == 's' && computer == 'p') { 
        return 1; 
    } 
    if (user == 's' && computer == 'r') { 
        return -1; 
    } 
    if (user == 'p' && computer == 'r') { 
        return 1; 
    } 
    if (user == 'p' && computer == 's') { 
        return -1; 
    } 
    if (user == 'r' && computer == 'p') { 
        return -1; 
    } 
    if (user == 'r' && computer == 's') { 
        return 1; 
    } 
    return 0
}
int main(){
     cout << "\n\n\n\t\t\tWelcome to Stone Paper Scissor "
            "Game\n"; 
  
    cout << "\n\t\tEnter r for ROCK, p for PAPER, and s "
            "for SCISSOR\n\t\t\t\t\t"; 
    char guess;

    while(1){
        cin>> guess;
        if (guess == 'r' || guess == 'p' || guess == 's'){
            break;
        }
        else{
            cout << "\t\t\tInvalid Player Move!!! Please Try Again." << endl; 
        }
    }
    char user = guess;
    char computer = com();
    int gameResult = result(user, computer);
    
    if ( gameResult == 0){
        cout << "\n\t\t\tGame Draw!\n"; 
    }
    if (gameResult == 1){
        cout << "\n\t\t\tCongratulations! Player won the "
                "game!\n"; 
    }
    else{
        cout << "\n\t\t\tOh! Computer won the game!\n"; 
    }
        cout << "\t\t\tYour Move: " << user << endl; 
    cout << "\t\t\tComputer's Move: " << computer << endl; 
return 0;
}
