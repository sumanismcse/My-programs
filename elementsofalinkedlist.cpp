#include<stdio.h>
#include<stdlib.h>
typedef struct mylist
{
	int info;
	struct mylist *link;
}Node;
int main()
	{
		Node*a=(Node*)malloc(sizeof(Node));
		Node*b=(Node*)malloc(sizeof(Node));
		Node*c=(Node*)malloc(sizeof(Node));
		
		a->link=NULL;
		b->link=NULL;
		c->link=NULL;
			
		printf("a data=");
		scanf("%d",&a->info);
		printf("b data=");
		scanf("%d",&b->info);
		printf("c data=");
		scanf("%d",&c->info);
		
		a->link=b;
		b->link=c;
		while(a!=NULL){
		printf(" %d-> ",a->info);
		a=a->link;
	}
	printf("null");
	return 0;
	}

