#ifndef PALODEMANGO_H
#define PALODEMANGO_H

struct mangoNode {
	mangoNode *next;
	mangoNode *back;
	int weight;
};

class PalodeMango
{

private:
	mangoNode *first;
	mangoNode *last;

public:
	PalodeMango();
	~PalodeMango();

	int amountFruit();
	void addFruit();
	void deleteFruit(int);
	void insertFruit(int);
	void printPalodeMango();

};

#endif // !PALODEMANGO_H




