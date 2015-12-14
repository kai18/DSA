#include <stdio.h>
#include <iostream>
int main()
{
	int m,n,r=1;
	scanf("%d %d",&m,&n);
	while(r>0)
	{
		r=m%n;
		if(r==0)
			{
				std::cout<<n;
				break;
			}
		else
		{
			m=n;
			n=r;
		}
	}
	return 0;

}