#include "stackfunctions.h"
#include "node.h"
#include <iostream>
#include <string>

using namespace std;

stackfunctions::stackfunctions()
{
}

void stackfunctions::addNode()
{
	cout << "Enter Node: ";
	string str;
	cin >> str;

	node *tmp = bottom;
	node *tmp2 = top;

	if (str == "+")
	{
		if (tmp == nullptr)
		{
			cout << "\nUnable to performe action!" << endl;
			cout << "There must be at least two numbers in the stack" << endl;
		}

		while (tmp->next != tmp2)
		{
			tmp = tmp->next;
		}

		int sum = tmp->data + tmp2->data;
		tmp->data = sum;
		tmp->next = nullptr;
		top = tmp;

	}
	else if (str == "-")
	{
		if (tmp == nullptr)
		{
			cout << "\nUnable to performe action!" << endl;
			cout << "There must be at least two numbers in the stack" << endl;
		}

		while (tmp->next != tmp2)
		{
			tmp = tmp->next;
		}

		int sub = tmp->data - tmp2->data;
		tmp->data = sub;
		tmp->next = nullptr;
		top = tmp;
	}
	else if (str == "*")
	{
		if (tmp == nullptr)
		{
			cout << "\nUnable to performe action!" << endl;
			cout << "There must be at least two numbers in the stack" << endl;
		}

		while (tmp->next != tmp2)
		{
			tmp = tmp->next;
		}

		int multi = tmp->data * tmp2->data;
		tmp->data = multi;
		tmp->next = nullptr;
		top = tmp;
	}
	else
	{
		node *newnode = new node();
		newnode->data = stoi(str);

		if (bottom == nullptr)
		{
		newnode->next = nullptr;
		bottom = top = newnode;
		}
		else
		{
		top->next = newnode;
		top = newnode;
		top->next = nullptr;
		}
	}

		
	
}

void stackfunctions::print()
{
	node *tmp = bottom;

	if (tmp == nullptr)
	{
		cout << "Unable to print stack is empty!" << endl;
	}
	else 
	{
		cout << "" << endl;
		while (tmp != nullptr) 
		{
			cout << tmp->data << " ";
			tmp = tmp->next;
		}
		cout << "" << endl;
	}
}
