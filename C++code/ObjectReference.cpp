// ObjectReference.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class A {
public:
	A(int v) {

	}



};


int main()
{
	A a(10);
	//this is important, you cannot check object references for null directly.
	//the below will fail
	if (a == NULL)
		cout << "It is null";
	//But this will pass
	if (&a == NULL)
		cout << "It is null";
	//however, this will pass
	A *a1 = new A(10);
	if (a1 == NULL)
		cout << "It is null";

    return 0;
}

