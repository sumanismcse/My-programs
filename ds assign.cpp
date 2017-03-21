#include<stdio.h>
int main()
	{
		int i,n,j;
		printf("Enter no. of elements of the array:\n");
		scanf("%d",&n);
		int a[n];
		printf("Enter the elements of the array:\n");
		for(j=1;j<=n;j++)
		{
			scanf("%d",&a[j]);
		}
		printf("Enter function no.:");
		printf("Enter 1 for Right Circular Shift \n 2 for Left Circular Shift \n 3 for Reversing an array \n 4 for Search for a given value \n 5 for Check if array sorted \n 6 for pair of elements whose Sum= x \n 7 for pair of elements whose multiplication = Y \n");
		int var;
		scanf("%d",&var);
		switch(var)
		{
			case 1:
				int r;
				printf("No. of times to do Right Circular Shift:\n");
				scanf("%d",&r);
				while(r-->0)
				{
					while(j>1)
					{
						j--;
						a[j+1]=a[j];
					}
				a[1]=a[n+1];
				}
				printf("New Shifted Array=");
				for(j=1;j<=n;j++)
				{
					printf("%d\t",a[j]);
				}
			break;
			case 2:
				int l;
				printf("No. of times to do left circular shift:\n");
				scanf("%d",&l);
				l=l%n;
				while(l-->0)
				{
					int tmp;
					tmp=a[1];
					for(i=2;i<n;i++)
					{
						a[i-1]=a[i];
					}
					a[n-2]=tmp;
				}
				for(i=1;i<=n;i++)
				{
					printf("%d\t",a[i]);
				}
				break;
			case 3:
				for(i=n;i>=1;i--)
				{
					printf("%d\t",a[i]);
				}
				break;
			case 4:
				int s,c;
				printf("Enter value to be searched:\n");
				scanf("%d",&s);
				i=1;
				while(a[i]!=s)
				{
					i++;
				}
				if(i==(n+1))
				{
					printf("Element not present");
				}
				else
				{
					printf("Element present at location: %d\n",i);
				}
				break;
			case 5:
				i=1;
				while(i<=n)
				{
					if(a[i]<a[i+1])
					{
						i++;
					}
				}
				if(i==(n+1))
				{
					printf("Array is Sorted");
				}
				else 
					if(i<n)
					{
						printf("Array is not sorted");
					}
				break;
			case 6:
				int x;
				printf ("Enter no. which is the sum two array nos ");
				scanf("%d",&x);
				for(i=1;i<=n/2;i++)
				{
					for(j=1;j<=n;j++)
					{
						if((a[i]+a[j])==x)
						{
							printf("%d\t %d\n",i,j);
						}
					}
				}
				break;
			case 7:
				int y;
				printf ("Enter no. which is the multipli two array nos ");
				scanf("%d",&x);
				for(i=1;i<=n/2;i++)
				{
					for(j=1;j<=n;j++)
					{
						if((a[i]*a[j])==x)
						{
							printf("%d\t %d\n",i,j);
						}
					}
				}
				break;
		}
	return 0;
}

