// NewLinkedList.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
// LinkedList.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;



class LinkedList {


public:
	int data;
	LinkedList *next;


	LinkedList(int d) {
		data = d;
		next = NULL;


	}

	void insert(int d) {
		LinkedList *temp = this;
		//cout << "Calling insert " << temp->data << endl;
		while (temp->next != NULL) {
			//cout << "MMMMMMMMMMMM" << temp->data;
			temp = temp->next;

		}
		//cout << "most critical";
		temp->next = new LinkedList(d);
		//cout << "----------------" << endl;




	}

	void display() {
		LinkedList *temp = this;
		//cout << "In display";
		//cout << temp->data;



		while (temp != NULL) {
			//cout << "NNNNNNN";
			cout << temp->data << endl;

			temp = temp->next;
			//cout << temp->data;
			//cout << temp.data;
		}



	}




};



int main()
{
	LinkedList head(1);
	head.insert(2);
	head.insert(3);
	head.insert(4);
	head.insert(5);
	
	
	head.display();
	


	return 0;
}






