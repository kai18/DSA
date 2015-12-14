#include <stdio.h>
#include <stdlib.h>

int main()
{
	int life;
	while(1)
	{
		scanf("%d",&life);
		if(life==42)
			return 0;
		printf("%d",life);

	}
	return 0;
}

struct node* lca(struct node *rootNode, int a, int b)
{
	while(1)
	{
		if((a < rootNode->data && b > rootNode->data)|| (a > rootNode->data && b< rootNode->data))
		{
			printf("%d",rootNode->data);
			return &rootNode;
		}
		else if(a < rootNode->data && b < rootNode->data)
			rootNode = rootNode->LLINK;
		else
			rootNode = rootNode->RLINK;
	}
}