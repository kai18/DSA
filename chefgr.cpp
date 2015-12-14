#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <queue>
#include <list>
#include <iostream>
using namespace std;
vector< vector<int> > v;
vector< vector <int> > adj;
vector<int> visited;
int *dist;
int *path;
int n, counter = 0, destination;
void bfs(int u)
{
	queue<int> q;
	q.push(u);
	while(!q.empty())
	{
		u = q.front();
		q.pop();
		for(vector<int>::iterator i = v[u].begin();i != v[u].end();++i)
		{
			int x = *i;
			visited[u] = 1;
			if(!visited[x])
			{
				visited[x] = 1;
				dist[x] = dist[u]+1;
				path [x] = u;
				q.push(x);
			}
		}
	}
}
int main()
{
	int t, m, a, b, i;
	scanf("%d %d", &n, &m);
	v = vector<vector <int> >(n+1);
	adj = vector<vector <int> >(n+1, vector<int>(n+1, 0)); 
	visited = vector <int> (n+1,0);
	destination = n;
	dist = (int*)calloc((n+1), sizeof(int));
	path = (int*)calloc((n+1), sizeof(int));
	while(m--)
	{
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
		adj[a][b] = 1;
		adj[b][a] = 0;
	}
	bfs(1);
	for (int i = 0; i <= n; ++i)
	{
		printf("%d\n", path[i]);
	}
	i=n;
	while(i>1)
	{
		if(adj[path[path[i]]][path[i]]!=1)
			counter ++;
		i=path[i];
	}
	printf("%d\n",counter);


}