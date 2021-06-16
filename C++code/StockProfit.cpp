// ConsoleApplication5.cpp : Defines the entry point for the console application.
//
//buy and sell stock maximum profit
#include "stdafx.h"
#include <iostream>
#include <list>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;
static int maxProfit(vector<int> &j) {
	int maxProf = 0;
	int minL = INT_MAX;
	for (int i = 0; i < j.size(); i++) {
		minL = min(minL,j[i]);
		int profit = j[i] - minL;
		maxProf = max(maxProf,profit);
	}
	
	cout << maxProf;
	return maxProf;
}

int main()
{
	vector<int> *v = new vector<int>();
	v->push_back(3);
	v->push_back(15);
	v->push_back(1);
	v->push_back(18);
	v->push_back(24);
	maxProfit(*v);
	
    return 0;
}

