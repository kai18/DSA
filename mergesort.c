#include <stdio.h>
#include <stdlib.h>

struct node
{
	long long data;
	struct node *LLINK;
	struct node *RLINK;
};

long int c=0;

int insertNode(int data ,struct node **root)
{
	struct node *newNode = (struct node*)malloc(sizeof(struct node));

	if(!*root)
	{
		newNode->data=data;
		newNode->LLINK=NULL;
		newNode->RLINK=NULL;
		*root=newNode;
		printf("%d\n",(*root)->data);
		return 0;
	}
	else
	{
		newNode->data = data;
		newNode->LLINK = NULL;
		newNode->RLINK = NULL;
		while(*root!=NULL)
		{
			c++;
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
		printf("%d\n",(*root)->data);

	}
}
struct node* lca(struct node *rootNode, int a, int b)
{
	while(rootNode)
	{
		if((a < rootNode->data && b > rootNode->data)|| (a > rootNode->data && b< rootNode->data))
		{
			printf("%d\n",rootNode->data);
			return rootNode;
		}
		else if(a < rootNode->data && b < rootNode->data)
		{
			printf("we are here\n");
			rootNode = rootNode->LLINK;
		}
		else
		{
			printf("We are here\n");
			rootNode = rootNode->RLINK;
		}
	}
	printf("One or both nodes are not present in the BST");
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
	int n=7, a, b;
	struct node *root = NULL;
	struct node *lcan = (struct node*)malloc(sizeof(struct node));
	while(n-->0)
	{
		scanf("%d",&a);
		insertNode(a,&root);
	}
	preorderTraversal(root);
	scanf("%d %d", &a, &b);
	lcan=lca(root, a, b);
	printf("%d",lcan->data);
	return 0;
}