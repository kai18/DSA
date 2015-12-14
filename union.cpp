#include <stdio.h>
#include <iostream>
#include <vector>
class disjointSet
{
	std::vector<int> v;
public:
	disjointSet(int numberOfElements):v(numberOfElements)
	{
		for(int i=0;i<numberOfElements;i++)
			v.push_back(i);
	}
	void find(int x) const;
	void unionSet(int p,int q);
};
void disjointSet::find(int x) const
{
	while()
}
void disjointSet::unionset(int p,int q)
{
	if(!(find(p)==find(q)))
		v[p]=q;
	else throw 1;
}
int main()
{
	return 0;
}