#include <stdio.h>
#include <vector>
#include <iostream>
#include <stdlib.h>

using namespace std;

vector <vector <int> >graph;
int n;

int bfs()
{
	int counter = 0, c = 0;
	while(c++ < n)
	{
		vector<int>::iterator it;
		it = graph[c].begin();
		vector<int>::iterator it1;
		int *visited = (int*)calloc(n+1,sizeof(int));
		for(it1=graph[*it].begin(); it1 < graph[*it].end();++it1)
		{
			vector <int>::iterator it2;
			for(it2 = graph[*it1].begin(); it2 < graph[*it1].end(); ++it2)
			{
				printf("lol\n");
				if(!visited[*it2])
				{
					printf("lolp\n");
					visited[*it2] = 1;
					counter++;
				}
			}
		}
	}
	return counter;
}
int main()
{
	int k;
	scanf("%d",&n);
	graph.resize(n*n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d",&k);
			if(k)
				graph[i].push_back(j);
		}
	}
	for (int i = 0; i < graph.size(); i++)
	{
		for (int j = 0; j < graph[i].size(); j++)
		{
			printf("%d ", graph[i][j]);
		}
		printf("\n");
	}

	printf("HERE\n");
	printf("%d\n", bfs());

	return 0;
}