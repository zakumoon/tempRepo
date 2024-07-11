#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
struct Seat
{
	char	siteno[5];	//counting chars length and minus with 1 null char
	bool	free;	//true:free,false:reseved
	char	custname[50]; //customer name
	char	tel[10];	// customer telephone
};

int main()
{
	struct Seat site[8][4] = {
		{ {"1A",true,"",""},{"1B",true,"",""},{"1C",true,"",""},{"1D",true,"",""}},
		{ {"2A",true,"",""},{"2B",true,"",""},{"2C",true,"",""},{"2D",true,"",""}},
		{ {"3A",true,"",""},{"3B",true,"",""},{"3C",true,"",""},{"3D",true,"",""}},
		{ {"4A",true,"",""},{"4B",true,"",""},{"4C",true,"",""},{"4D",true,"",""}},
		{ {"5A",true,"",""},{"5B",true,"",""},{"5C",true,"",""},{"5D",true,"",""}},
		{ {"6A",true,"",""},{"6B",true,"",""},{"6C",true,"",""},{"6D",true,"",""}},
		{ {"7A",true,"",""},{"7B",true,"",""},{"7C",true,"",""},{"7D",true,"",""}},
		{ {"8A",true,"",""},{"8B",true,"",""},{"8C",true,"",""},{"8D",true,"",""}},
	};
	char selectMenu = 0; //select the chair you want to sit

	int row, col; 	//declare row and column
	do {

		for (row = 0; row < 8; row++) //do this while row is 0 and less then 8 ( row is 1A to 8A)
		{
			for (col = 0; col < 4; col++) { //while col is 0 and less then 4 (col is 1A to 1D)
				if (site[row][col].free == true)	// if seat of row and col is free is true
					cout << "|" << setw(3) << site[row][col].siteno; // cout ID of seat of row amd col
				else										//else 
					cout << "|" << setw(3) << " **";		//cout **
			}
			cout << "\n";
		}

		cout << " MENU" << endl;
		cout << "<R> Reserve seat" << endl;
		cout << "<S> Summary seat" << endl;
		cout << "<Q> Quit" << endl;
		cout << "select R/S/Q ? "; 
		cin >> selectMenu;



		switch (selectMenu)		//from RSQ selection
		{
			case 'R' : 
			case 'r' :		//case r or R
						{
							int iRfound = -1, iCfound = -1;						
							char selectSite[10];
							cout << "select seat (upper charector) : ";
							cin >> selectSite;
							for (row = 0; row < 8 && iRfound == -1 ; row++)
							{
								for (col = 0; col < 4 && iCfound == -1; col++) {
									if ( strcmp(site[row][col].siteno, selectSite)==0 ) {
										iRfound = row;
										iCfound = col;
									}
								}
							}
							site[iRfound][iCfound].free = false;
							cout << "name=? "; cin >> site[iRfound][iCfound].custname;
							cout << "telphone=? "; cin >> site[iRfound][iCfound].tel;

						}
						break;
			case 'S':
			case 's':
			{

			}
			break;
		}
		
	} while ( (selectMenu =='Q' || selectMenu == 'q') ==false );

}

 