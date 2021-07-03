// BalancedStrings.cpp : Defines the entry point for the console application.
//


#include <iostream>
#include <stack>
#include "stdafx.h"

using namespace std;

bool isBalanced(string s) {
	stack<char> stack;
	char l;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
			stack.push(s[i]);
			continue;
		}
		if (stack.empty())
			return false;

		switch (s[i]) {
		case ')':
			l = stack.top();
			stack.pop();
			if (l == '{' || l == '[')
				return false;
		case '}':
			l = stack.top();
			stack.pop();
			if (l == '(' || l == '[')
				return false;
			break;


		case ']':
			l = stack.top();
			stack.pop();
			if (l == '{' || l == '(')
				return false;
			break;

		}



	}
	
	return true;

}





int main()
{
	string s1 = "{}";	
	cout << "MMMM";
	
	std::cout << isBalanced(s1);
	
	
    return 0;
}

