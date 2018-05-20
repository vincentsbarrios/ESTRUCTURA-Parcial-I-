#include "PalodeMango.h"
#include <iostream>

class NodoMango;

PalodeMango::PalodeMango(){}


PalodeMango::~PalodeMango(){}

int PalodeMango::amountFruit()
{
	mangoNode *tmp;
	tmp = first;
	int count = 0;

	if (tmp == nullptr)
	{
		return -1;
	}
	
	while (tmp != nullptr)
	{
		count++;
		tmp = tmp->next;
	}

	return count;
}

void PalodeMango::addFruit()
{
	std::cout << "\nWEIGHT: ";
	int x;
	std::cin >> x;

	mangoNode *newnode = new mangoNode();
	newnode->weight = x;
	

	if (first == nullptr)
	{
		first = newnode;
		last = newnode;
		newnode->back = nullptr;
		newnode->next = nullptr;
	}

	last->next = newnode;
	newnode->back = last;
	last = newnode;
	last->next = nullptr;

}

void PalodeMango::deleteFruit(int z)
{

	mangoNode *eraseNode, *aux1, *aux2, *temp;
	eraseNode = first;
	temp = first;
	int x = 1;

	if (temp == nullptr)
	{
		std::cout << "\nSE ACABARON LOS MANGO CREZCA OTRA PALO!" << std::endl;
	}
	
	while(eraseNode != nullptr)
	{
		if (z > amountFruit())
		{
			std::cout << "\nPosition exceed the limit!" << std::endl;
			break;
		}

		if (z == 1)
		{
			aux2 = eraseNode->next;
			aux2->back = nullptr;
			first = aux2;
			std::cout << "\nFruit was delete!" << std::endl;
			break;
		}

		if (x == amountFruit())
		{
			aux2 = eraseNode->back;
			aux2->next = nullptr;
			last = aux2;
			std::cout << "\nFruit was delete!" << std::endl;
			break;
		}

		if (x == z)
		{
			aux1 = eraseNode->back;
			aux2 = eraseNode->next;
			eraseNode->next = eraseNode->back = nullptr;
			aux1->next = aux2;
			aux2->back = aux1;
			delete eraseNode;
			std::cout << "\nFruit was delete!" << std::endl;
			break;
		}
		x++;
		eraseNode = eraseNode->next;
	}

}

void PalodeMango::insertFruit(int pos)
{
	std::cout << "\nWEIGHT: ";
	int x;
	std::cin >> x;
	mangoNode *newnode = new mangoNode();
	newnode->weight = x;

	int count = 1;

	mangoNode *temp = first;
	mangoNode *aux1 = nullptr;

	while (temp != NULL)
	{
		if (pos > amountFruit())
		{
			std::cout << "\nPosition exceed the limit!" << std::endl;
		}

		if (pos == 1)
		{
			aux1 = first;
			newnode->next = aux1;
			newnode->back = nullptr;
			aux1->back = newnode;
			first = newnode;
			break;
		}

		if (pos == amountFruit())
		{
			aux1 = last;
			newnode->next = nullptr;
			newnode->back = aux1;
			aux1->next = newnode;
			last = newnode;
			break;
		}

		if (count == pos)
		{
			aux1 = temp->back;
			aux1->next = newnode;
			newnode->back = aux1;
			newnode->next = temp;
			temp->back = newnode;
			break;
		}
		temp = temp->next;
		count++;
	}
	
}

void PalodeMango::printPalodeMango()
{
	mangoNode *tmp;
	tmp = first;

	if (tmp == nullptr)
	{
		std::cout << "\nSE ACABARON LOS MANGO CREZCA OTRA PALO!" << std::endl;
	}

	while (tmp != nullptr)
	{
		std::cout << tmp->weight << " ";
		tmp = tmp->next;
	}

}
