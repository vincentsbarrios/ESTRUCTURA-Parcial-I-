#include <string>

using namespace std;

#ifndef HASH_H
#define HASH_H

class hashtable
{

private:
	static const int tablesize = 10;

	struct item{
		string name;
		string drink;
		item *next;
	};

	item *HashTable[tablesize];

public:
	hashtable();
	int Hash(string);
	void addItem();
	void searchItem();
	void deleteItem();
	void printHashTable();

};




#endif // !HASH_H

