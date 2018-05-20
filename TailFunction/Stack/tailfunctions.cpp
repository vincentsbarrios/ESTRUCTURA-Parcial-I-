#include "tailfunctions.h"
#include <iostream>


tailfunctions::tailfunctions(){}

bool tailfunctions::isEmpty()
{
	if (first == nullptr)
		return true;
	return false;
}

int tailfunctions::queue()
{
	node * newnode = new node();
	std::cout << "Number: ";
	std::cin >> newnode->data;

	if (isEmpty() == true)
	{
		first = last = newnode;
		newnode->next = nullptr;
	}

	last->next = newnode;
	last = newnode;
	newnode->next = nullptr;

	return 0;
}

int tailfunctions::dequeue()
{
	node *tmp = first;

	if (isEmpty() == true)
	{
		return 1;
	}
	
	first = tmp->next;
	delete tmp;

	return 0;
}

int tailfunctions::getSize()
{
	node *temp = first;
	int c = 0;
	while (temp != nullptr)
	{
		c++;
		temp = temp->next;
	}
	return c;
}


void tailfunctions::print()
{
	node *tmp = first;
	while (tmp != nullptr)
	{
		std::cout << tmp->data << " ";
		tmp = tmp->next;
	}
}

tailfunctions::~tailfunctions()
{
}
