#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <map>

using namespace std;
queue <int> q;
vector< vector<int> > graph;
map< pair <int,int>,int> adj;
int counter=0,found=0;
int *distanc;
void bfs(int start, int end)
{
	int p;
	q.push(start);
	distanc[start] = 0;
	while(!q.empty())
	{
		p = q.front();
		q.pop();
		vector<int>::iterator it;
		for(it=graph[p].begin(); it < graph[p].end();it++)
		{
			if(distanc[*it] > distanc[p]+adj[pair<int, int>(*it, p)])
			{
				distanc[*it] = distanc[p]+adj[pair<int, int>(*it, p)];
				q.push(*it);
			}
		}
	}
}

int main()
{
	int n, m, x, y, i=0;
	cin>>n>>m;
	graph.resize(n+1);
	distanc = (int*)calloc(n+1,sizeof(int));
	for (int i = 0; i <= n; ++i)
		distanc[i]=999999;
	while(m-- > 0)
	{
		scanf("%d %d",&x,&y);
		graph[x].push_back(y);
		graph[y].push_back(x);
		adj[pair<int,int>(x,y)] = 0;
		if(!adj.count(pair<int,int>(y,x)))
			adj[pair<int,int>(y,x)]=1;
	}
	bfs(n,1);
	if(distanc[1]==999999)
		printf("%d\n", -1);
	else
		printf("%d\n",distanc[1]);
		
	return 0;
}

