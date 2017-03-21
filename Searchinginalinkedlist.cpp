#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
}Node;
Node*getnode();
int main()
	{ 
	Node*root=getnode();
	root->next=NULL;
	Node*temp=root;
	int c;
	while(c!=4)
	{
		printf("\n\t please enter the data for s info");
		scanf("%d",&root->data);
	
	root->next=getnode();
	root=root->next;
	c++;
	}
	int item;
	printf("\n\tEnter item");
	scanf("%d",&item);
	temp=root;
	while(root!=NULL && root->data!=item)
	{
		root=root->next;
	}
	if(root!=NULL)
	{
		printf("Data found");
	}
	else
	printf("Search unsuccessfull");
		
	return 0;
}
Node *getnode()
{
	return((Node*)malloc(sizeof(Node)));
}
