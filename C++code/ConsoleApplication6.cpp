// ConsoleApplication6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <list>
using namespace std;
int swap(int *x, int *y) {
	int t;
	t = *x;
	*x = *y;
	*y = t;

	return 0;
}

int swapR(int &x, int &y) {
	int t;
	t = x;
	x = y;
	y = t;

	return 0;
}
//pass by value, changes done in the list are NOT visible outside
void modByValue(list<int> l) {
	l.push_back(55);
	l.push_back(77);
	l.push_back(88);

}
//pass by reference, changes done in the list are visible outside
void modByreference(list<int> &l) {
	l.push_back(55);
	l.push_back(77);
	l.push_back(88);

}
//pass by pointer, changes done in the list are visible outside
void modByPointer(list<int> *l) {
	l->push_back(55);
	l->push_back(77);
	l->push_back(88);

}
class A {


};

int main()
{
	A a1;
	A& b = a1;
	int s1 = 5, s2 = 6;
	swapR(s1,s2);
	//cout << s1;
	list<int> a;
	a.push_back(1);	
	modByreference(a);
	for (int item : a)
		cout << item;

	list<int> aaa;
	aaa.push_back(1);
	modByPointer(&aaa);
    return 0;
}

