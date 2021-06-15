// ConsoleApplication4.cpp : Defines the entry point for the console application.
//constructor destructor calling n virtual functions

#include "stdafx.h"
# include <iostream>
using namespace std;

class Shape {
public:

	Shape() {
		cout << "In shape constructor "<<endl;
	}
	virtual void draw() = 0;

	 virtual ~Shape() {
		cout << "In shape destructor " << endl;


	}

};
class Circle : public Shape {
public:
	Circle() {
		cout << "In circle constructor "<< endl;
	}

	 ~Circle() {
		cout << "In circle destructor " << endl;


	}
	void draw() {
		cout << "Drawing a circle "<< endl;
	}


};


int main()
{
	Shape *s = new Circle();
	s->draw();
	delete s;

    return 0;
}

