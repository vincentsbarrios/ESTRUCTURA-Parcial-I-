#include <iostream>
#include <conio.h>
#include "PalodeMango.h"

using namespace std;

int main()
{
	int opp;
	PalodeMango AA;

	do {
		cout << "\nWELCOME TO THE MAIN MENU" << endl;
		cout << "1. Add Mango" << endl;
		cout << "2. Insert Mango" << endl;
		cout << "3. Delete Mango" << endl;
		cout << "4. Print Weight of the Mangos" << endl;
		cout << "5. Exit" << endl;
		cout << "Choose: ";
		cin >> opp;

		switch (opp)
		{
		case 1:
			AA.addFruit();
			break;
		case 2:
			cout << "\nEnter posicion number: ";
			int v;
			cin >> v;
			AA.insertFruit(v);
			break;
		case 3:
			cout << "\nEnter posicion number: ";
			int z;
			cin >> z;
			AA.deleteFruit(z);
			break;
		case 4:
			AA.printPalodeMango();
			cout << "\n" << endl;
			break;
		}

	} while (opp != 5);
	{

	}

}