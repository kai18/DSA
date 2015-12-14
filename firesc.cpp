#include <iostream>
#include <vector>
#include <stdlib.h>
#include <stdlib.h>

using namespace std;
vector< vector<int> > graph;
vector<bool> visited;
int emp, rel;
long long ways=0, captains=1;

void dfs(int v)
{
	rel++;
	visited[v] = true;
	for(vector<int>::iterator it = graph[v].begin();it != graph[v].end();it++)
	{
		if(!visited[*it])
			dfs(*it);
	}
}

int main()
{
	int u, v, t;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		cin>>emp>>rel;
		graph = vector<vector <int> >(emp+1);
		while(rel > 0)
		{
			cin>>u>>v;
			graph[u].push_back(v);
			graph[v].push_back(u);
			rel --;
		}
		visited = vector <bool>(emp+1, 0);
		for (int i = 1; i <= emp; i++)
		{
			if(visited[i])
				continue;
			else
				{
					rel = 0;
					++ways;
					dfs(i);
					captains =(long long)(captains*rel)%1000000007;
				}
		}
		cout<<ways<<" "<<captains<<"\n";
		ways = 0;
		captains = 1;


	}

	return 0;
}