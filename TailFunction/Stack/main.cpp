#include "node.h"
#include "tailfunctions.h"
#include <conio.h>
#include <iostream>

int main()
{
	tailfunctions GG;
	
	GG.queue();
	GG.queue();
	GG.print();
	GG.queue();
	GG.queue();
	std::cout << " " << std::endl;
	GG.print();
	GG.dequeue();
	GG.dequeue();
	std::cout << " " << std::endl;
	GG.print();
	std::cout << "\n Size:"  << GG.getSize() << std::endl;

	_getch();
}