#include <stdio.h>
#include <iostream>
#include <stack>
#include <string>
using namespace std;
string expression;
stack <char> exp1;
int n=10;
int main()
{
	cin>>expression;
	for(int i=0;i<expression.size();i++)
	{
		char last=expression[i];
		if((expression[i])=='('||(expression[i])=='['||(expression[i])=='{')
		{
			exp1.push(expression[i]);
		}
		switch(expression[i])
		{
			case ')':
					
					
		}
	}
	return 0;
}