#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *LLINK;
	struct node *RLINK;
};

int insertNode(int data ,struct node **root)
{
	struct node *newNode = (struct node*)malloc(sizeof(struct node));
	printf ("Inserting %d\n",data);

	if(!*root)
	{
		newNode->data=data;
		newNode->LLINK=NULL;
		newNode->RLINK=NULL;
		*root=newNode;
		printf("%d\n",(*root)->data);
		printf("We are Here\n");
		return 0;
	}
	else
	{
		newNode->data = data;
		newNode->LLINK = NULL;
		newNode->RLINK = NULL;
		while(*root!=NULL)
		{
			if(data<((*root)->data))
			{
				root = &(*root)->LLINK;

			}
			else if(data>((*root)->data))
			{
				root = &(*root)->RLINK;
			}
			else
				return -1;
		}
		*root = newNode;


	}
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

void preorderTraversal(struct node *rootNode)
{
	if(rootNode)
	{
		printf("%d\n",rootNode->data);
		preorderTraversal(rootNode->LLINK);
		preorderTraversal(rootNode->RLINK);
	}
}

int main()
{
	int n=10, a, b;
	struct node *root = NULL;
	struct node *lcan = (struct node*)malloc(sizeof(struct node));
	while(n-->0)
	{
		insertNode(rand()%1000,&root);
	}
	scanf("%d %d", &a, &b);
	lca(root, a, b);
	//printf("%d",lcan->data);
	return 0;
}
