// LinkedList.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

//this is a problematic linkedlist
//problems, you should always initialive values to NULL
//



class LinkedList {


public:
	int data;
	LinkedList *next;
	LinkedList() {

	}

	LinkedList(int d) {
		data = d;
		
		

	}

	void insert(int d) {
		// below is anothe rproblem, a copy of this is created and changes are done on the copy
		// hence use 	LinkedList *temp = this;
		LinkedList temp = *this;
		cout << "Calling insert "<< temp.data<< endl;
		while (temp.next != NULL) {
			cout << "MMMMMMMMMMMM"<< temp.data;
			temp = *temp.next;

		}
		cout << "most critical";
		temp.next = new LinkedList(d);
		cout << "----------------"<< endl;

		


	}

	void display() {
		LinkedList temp = *this;
		cout << "VVVVVVVVVVVVVV";
		cout << temp.data;
		
		

		while (&temp != NULL) {
			cout << "NNNNNNN";
			cout << temp.data;

			temp = *temp.next;
			cout << temp.data;
			//cout << temp.data;
		} 
		


	} 




};

class A {
private:
	int mm;
public:
	A(int x) {
		mm = x;

	}
	void display() {
		cout << mm;
	}


};


int main()
{
	LinkedList head(1);
	head.insert(2);
	head.insert(3);
	//head.insert(4);
	//head.display();
	A a1(10);
	A a2(20);
	A &a3 = a1;
	a3.display();
	a3 = a2;

	a3.display();


    return 0;
}

