#include "node.h"

class stackfunctions
{

private:
	node *top = nullptr;
	node *bottom = nullptr;

public:
	stackfunctions();
	void addNode();
	void print();
};

