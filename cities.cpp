#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
int city[20];
const int x;
void makeSet()
{
	for(int i=0;i<20;i++)
		city[i]=i;
}
int root(int x)
{
	while(!(city[x]==x))
		{
			x=city[x];
		}
	return x;
}
inline bool related(int p,int q)
{
	if(root(p)==root(q))
		return true;
	else 
		return false;

}
void relate(int p, int q)
{
	if(!related(p,q))
		city[p]=q;
}
int main()
{
	int p,q;
	makeSet();
	relate(3,8);
	relate(4,0);
	relate(5,8);
	relate(8,17);
	relate(9,4);
	for(int i=0;i<20;i++)
	{
		std::cout<<i<<" is related to"<<root(i)<<"\n";
	}
	return 0;
}