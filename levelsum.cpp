#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct node
{
	int data;
	struct node*right;
	struct node*left;
};
void printgivenlevel(struct node*root,int level);
int height(struct node*node);
int printlevelorder(struct node*root)
{
	int h=height(root);
	int i;
	for(i=1;i<=h;i++)
	{
		printgivenlevel(root,i);
	}
}
void printgivenlevel(struct node*root,int level)
{
	if(root==NULL)
	return ;
	if(level==1)
	{
		cout<<root->data<<" ";
	}
	if(level>1)
	{
		printgivenlevel(root->right,level-1);
		printgivenlevel(root->left,level-1);
	}
}
int sum(struct node*root)
{
	int s;
	s=0;
	s=s+printlevelorder(root);
	cout<<"\n"<<s;
}
int height(struct node*node)
{
	if(node==NULL)
	return 0;
	else
	{
		int lheight=height(node->left);
		int rheight=height(node->right);
		if(lheight>rheight)
		{
			return(lheight+1);
		}
		else
			return(rheight+1);
			
	}
}
struct node*newNode(int data)
{
	struct node*node=(struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->right=NULL;
	node->left=NULL;
}
int main()
{
  struct node *root = newNode(1);
    root->left        = newNode(2);
    root->right       = newNode(3);
    root->left->left  = newNode(4);
    root->left->right = newNode(5);
 
	printlevelorder(root);
	sum(root);
return 0;
}


