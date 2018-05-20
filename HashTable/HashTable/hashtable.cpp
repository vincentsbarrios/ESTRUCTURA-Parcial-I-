#include "hashtable.h"
#include <iostream>

using namespace std;

hashtable::hashtable()
{
	for (int x = 0; x < tablesize; x++)
	{
		HashTable[x] = new item;
		HashTable[x]->name = "empty";
		HashTable[x]->drink = "empty";
		HashTable[x]->next = nullptr;
	}
}


int hashtable::Hash(string key)
{
	int hash = 0;
	int index;

	for (int x = 0; x < key.length(); x++)
	{
		hash = hash + (int)key[x];
	}

	index = hash % tablesize;

	return index;
}

void hashtable::addItem()
{
	cout << "\nName: ";
	string name;
	cin >> name;

	cout << "Drink: ";
	string drink;
	cin >> drink;

	int index = Hash(name);

	if (HashTable[index]->name == "empty")
	{
		HashTable[index]->name = name;
		HashTable[index]->drink = drink;
	}
	else 
	{
		item *ptr = HashTable[index];
		item *newitem = new item;
		newitem->name = name;
		newitem->drink = drink;
		newitem->next = nullptr;

		while (ptr->next != nullptr)
		{
			ptr = ptr->next;
		}

		ptr->next = newitem;
	}

}

void hashtable::searchItem()
{
	cout << "\nName: ";
	string name;
	cin >> name;

	for (int x = 0; x < tablesize; x++)
	{
		item *ptr = HashTable[x];
		while (ptr != nullptr)
		{
			if(ptr->name == name)
			{
				cout << "\nNumber: " << x + 1 << endl;
				cout << ptr->name << endl;
				cout << ptr->drink << endl;
				cout << "" << endl;
			}
			ptr = ptr->next;
		}
	}
}

void hashtable::deleteItem()
{
	cout << "\nName: ";
	string name;
	cin >> name;

	item *tmp = nullptr;

	for (int x = 0; x < tablesize; x++)
	{
		item *ptr = HashTable[x];
		if (ptr->name == name)
		{
			ptr->name = "empty";
			ptr->drink = "empty";
		}
		else
		{
			while (ptr != nullptr)
			{
				if (ptr->name == name)
				{
					tmp->next = nullptr;
					cout << "ERASE!" << endl;
					break;
				}
				tmp = ptr;
				ptr = ptr->next;
			}
		}
	}
}

void hashtable::printHashTable()
{
	for (int x = 0; x < tablesize; x++)
	{
		item *ptr = HashTable[x];
		cout << "\nNumber: " << x + 1 << endl;
		while (ptr != nullptr)
		{
			cout << ptr->name << endl;
			cout << ptr->drink << endl;
			cout << "" << endl;
			ptr = ptr->next;
		}
	}
}
