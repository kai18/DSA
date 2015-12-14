#include <stdio.h>
#include <iostream>
struct bst
{
	int data;
	bst *left;
	bst *right;
};
bst *root=NULL;
bst *new_node(int data)
{
	bst *newnode=new bst();
	newnode->data=data;
	newnode->left=NULL;
	newnode->right=NULL;
	return newnode;
}
void insert(int data)
{
	if(root==NULL)
	{
		root=new_node(data);
	}
	else if(data<=(root->data))
	{
		root->left=insert(root->left,data);
	}
	else
		root->right=insert(root->right,data);
}
bool search(bst* root,int data)
{
	if(root==NULL)
		return false;
	else if(root->data==data)
		return true;
	else if(data<=root->data)
		return search(root->left,data);
	else 
		return search(root->right,data);
}
int main()
{
	int n;
	insert(15);
	insert(10);
	insert(20);
	std::cin>>n;
	if(search(root,n)==true)
		std::cout<<"Number Found\n";
	else
		std::cout<<"Number not found\n";
	return 0;
}