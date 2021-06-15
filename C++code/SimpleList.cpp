// SimpleList.cpp : Defines the entry point for the console application.
//
//simple implementation of list application, it is actually a ddl

#include "stdafx.h"
#include <iostream>
# include <list>
using namespace std;


int main()
{
	list<int> fc;
	fc.push_back(1);
	fc.push_back(2);
	fc.push_back(3);
	fc.push_front(-1);
	fc.push_front(-2);
	fc.push_front(-3);
	cout << "how are you" << endl;
	for (int item : fc)
		std::cout << item << " ";

	list<int> *jj = new list<int>();
	jj->push_back(1);
	jj->push_back(2);
	jj->push_back(3);
	for (int item : *jj)
		std::cout << item << " ";
    return 0;
}

