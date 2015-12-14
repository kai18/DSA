#include <stdio.h>
#include <iostream>
#include <list>
#include <stdlib.h>
#include <stdlib.h>
#define NIL -1

using namespace std;

list<short int>*adj;
short int num=0,t, m, k, n;
int cost = 0;
void cutVertices(int u, bool visited[], short int disc[], 
       short int low[], short int parent[], bool ap[])
{
    
    static short int time = 0;

  
    short int children = 0;

    visited[u] = true;

    disc[u] = low[u] = ++time;

    for (list<short int>::iterator i = adj[u].begin(); i != adj[u].end(); ++i)
    {
        int v = *i;  

      
        if (!visited[v])
        {
            children++;
            parent[v] = u;
            cutVertices(v, visited, disc, low, parent, ap);

          
            low[u]  = min(low[u], low[v]);

          
            if (parent[u] == NIL && children > 1)
              if(!ap[u])
              {
              	cost = cost + k;
              	ap[u] = true;
              }

        
            if (parent[u] != NIL && low[v] >= disc[u])
              if(!ap[u])
              {
              	cost = cost+k;
              	ap[u] = true;
              }
        }

      
        else if (v != parent[u])
            low[u]  = min(low[u], disc[v]);
    }
}

void dfs()
{ // Mark all the vertices as not visited
    bool *visited = new bool[n+1];
    short int *disc = new short int[n+1];
    short int *low = new short int[n+1];
    short int *parent = new short int[n+1];
    bool *ap = new bool[n+1]; 

    for (int i = 0; i < n; i++)
    {
        parent[i] = NIL;
        visited[i] = false;
        ap[i] = false;
    }

  
    for (int i = 0; i < n; i++)
        if (visited[i] == false)
            cutVertices(i, visited, disc, low, parent, ap);
}

int main()
{
	int a, b;
	cin>>t;
	while(t--)
	{
		cost = 0;
		scanf("%d %d %d",&n,&m,&k);
		adj = new list<short int>[n+1];
		while(m--)
		{
			scanf("%d %d",&a, &b);
			adj[a].push_back(b);
			adj[b].push_back(a);
		}
		dfs();
		printf("%d\n",cost);
		
	}
	return 0;
}
