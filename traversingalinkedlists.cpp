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
	temp=root;
	while(root!=NULL)
	{
	printf("%d->",root->data);
	root=root->next;	
	}
	printf("NULL");
	return 0;
	}
	Node *getnode()
{
	return((Node*)malloc(sizeof(Node)));
}

