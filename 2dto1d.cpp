#include<stdio.h>
int main()
	{
		int x,y,i,j;
		printf("Enter no. of rows and columns in the array:\n");
		scanf("%d",&x);
		scanf("%d",&y);
		int a[x][y];
		printf("Enter elements of the array:\n");
		for(i=0;i<x;i++)
		{
			for(j=0;j<y;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		int z;z=x+y;
		int b[z];
		int c=0;
		for(i=0;i<x;i++)
		{
			for(j=0;j<y;j++)
			{
				b[c]=a[i][j];
				c++;
			}
		}
		printf("New 1D Array=\n");
		for(i=0;i<z;i++)
		{
			printf("%d\t",b[i]);
		}
	
	return 0;
	}

