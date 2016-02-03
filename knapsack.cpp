#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <map>

using namespace std;

int t, n, m;

map< pair<double,int>, double> lol;

priority_queue <double, std::vector<double> > maxHeap;

double ans=0.00, v, w;
int main()
{
	scanf("%d", &t);
	while(t-- > 0)
	{
		scanf("%d %d", &n, &m);
		int c=0;
		while(n-->0)
		{
			printf("hererr\n");
			scanf("%d %d",&v,&w);
			double x =v/w;
			printf("%f\n", x);
			lol(make_pair(x,c++),x);
		}
		c=0;
		printf("here\n");
		while(m-->0)
		{
			cout<<lol[c];
		}
		printf("%f\n", ans);
		ans=0;
	}

	return 0;
}

//vilas nayak
//snapdeal ceo