#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int gcd(int a, int b)
{
	while(a!=b)
	{
		if(a>b)
			a=a-b;
		else
		b=b-a;		
	}
	return a;
}

int main()
{
	int t,ans;
	long long n,k;
	scanf("%d",&t);
	printf("%d\n",n%k);
	return 0;
}