#include "node.h"

class tailfunctions
{
public:
	tailfunctions();
	bool isEmpty();
	int queue();
	int dequeue();
	int getSize();
	void print();
	~tailfunctions();

	node *first = nullptr;
	node *last = nullptr;

};

