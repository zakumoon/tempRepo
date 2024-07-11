#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
struct Seat
{
	char	siteno[5];	
	bool	free;	//true:free,false:reseved
	char	custname[50];
	char	tel[10];
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
	char selectMenu = 0;

	int row, col;
	do {

		for (row = 0; row < 8; row++)
		{
			for (col = 0; col < 4; col++) {
				if (site[row][col].free == true)
					cout << "|" << setw(3) << site[row][col].siteno;
				else
					cout << "|" << setw(3) << " **";
			}
			cout << "\n";
		}

		cout << " MENU" << endl;
		cout << "<R> Reserve seat" << endl;
		cout << "<S> Summary seat" << endl;
		cout << "<Q> Quit" << endl;
		cout << "select R/S/Q ? "; 
		cin >> selectMenu;



		switch (selectMenu)
		{
			case 'R' : 
			case 'r' :
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

 