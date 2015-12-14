#include <stdio.h>
#include <iostream>
#include <stack>
int main()
{
	std::stack<char>exp;
	int t = 3,x;
	char c;
	std::cin>>t;
	printf("Hello\n");
	while(t>0)
	{
		printf("Hello\n");
		scanf("%c",&c);
		while(c!=EOF)
		{
			if(c == '+' || c == '-' || c == '*' ||
			   c == '/' || c == '^')
			{
				exp.push(c);
			}
			else if (c == ')')
			{
				std::cout<<exp.top();
				exp.pop();
			}
			else if(c == '(')
				x=1;
			else
				std::cout<<c;	
		}
		std::cout<<"\n";
		t--;
	}
}