#include <conio.h>
#include <iostream>
#include <string>
#include "hashtable.h"

using namespace std;

int main()
{
	hashtable HT;
	HT.addItem();
	HT.addItem();
	HT.addItem();
	HT.printHashTable();
	HT.deleteItem();
	HT.printHashTable();
	HT.searchItem();

	_getch();
}