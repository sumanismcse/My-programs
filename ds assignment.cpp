#include<stdio.h>
int main()
	{
		int i,n;
		printf("Enter no. of elements of the array:\n");
		scanf("%d",&n);
		int a[n];
		printf("Enter the elements of the array:\n");
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		printf("Enter function no.:");
		printf("Enter 1 for insert at front \n 2 for insert at back \n 3 for insert at location \n 4 for deletion at front \n 5 for deletion at back \n 6 for deletion at given index \n 7 for traversing the array \n");
		int var;
		scanf("%d",&var);
		switch(var)
		{
			case 1:
				int element;
				printf("Enter element to be inserted");
				scanf("%d",&element);
				while(i>0)
				{
					i--;
					a[i+1]=a[i];
				}
				a[0]=element;
				printf("New Array=");
				for(i=0;i<=n;i++)
				{
					printf("%d\t",a[i]);
				}
				break;
			case 2:
				int b;
				printf("Enter element to be inserted at back");
				scanf("%d",&b);
				a[n]=b;
				printf("new array=");
				for(i=0;i<=n;i++)
				{
					printf("%d\t",&a[i]);
				}
				break;
			case 3:
				int loc;
				printf("Enter location to be inserted");
				scanf("%d",&loc);
				int c;
				printf("Enter element to be inserted at loc");
				scanf("%d",&c);
				for(i=n-1;i>loc-1;i--)
				{
					a[i+1]=a[i];
				}
				a[loc-1]=c;
				printf("new array=");
				for(i=0;i<=n;i++)
				{
					printf("%d\t",a[i]);
				}
				break;
			case 4:
				for(i=0;i<n;i++)
				{
					a[i-1]=a[i];
				}
				printf("New Array=");
				for(i=0;i<n-1;i++)
				{
					printf("%d\t",a[i]);
				}
				break;
			case 5:
				printf("New Array=");
				for(i=0;i<n-1;i++)
				{
					printf("%d\t",a[i]);
				}
				break;
			case 6:
				int del;
				printf("Enter position to be deleted:");
				scanf("%d",&del);
				for(i=del;i<n;i++)
				{
					a[i-1]=a[i];
				}
				printf("New Array=");
				for(i=0;i<n-1;i++)
				{
					printf("%d\t",a[i]);
				}
				break;
			case 7:
				for(i=0;i<n;i++)
				{
					printf("%d\n",a[i]);
				}
				break;
		}
	return 0;
	}

