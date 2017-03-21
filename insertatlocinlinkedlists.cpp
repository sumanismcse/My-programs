#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
}Node;
Node*getnode();
Node*root=getnode();
void Insert(int item,int n);
int main()
	{ 
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
	printf("Enter item to be inserted");
	scanf("%d",&item);
	Insert(4,2);
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
void Insert(int item,int n)
{
	Node*temp1=getnode();
	temp1->data=item;
	temp1->next=NULL;
	if(n==1)
	{
		temp1->next=root;
		temp1=root;
	}
	Node*temp2=root;
	int i;
	for(i=0;i<n-1;i++)
	{
		temp2->next=temp2;
	}
	temp1->next=temp2->next;
	temp2->next=temp1;
}

