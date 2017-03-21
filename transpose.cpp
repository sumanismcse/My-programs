#include<stdio.h>
int main()
	{
		int x,y,i,j;
		printf("Enter no. of rows and columns in the matrix:\n");
		scanf("%d",&x);
		scanf("%d",&y);
		int a[x][y];
		printf("Enter elements of the matrix:\n");
		for(i=0;i<x;i++)
		{
			for(j=0;j<y;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		int trans[y][x];
		for(i=0;i<x;i++)
		{
			for(j=0;j<y;j++)
			{
				trans[j][i]=a[i][j];
			}
		}
		printf("Transposed Matrix:\n");
		for(i=0;i<y;i++)
		{
			for(j=0;j<x;j++)
			{
				printf("%d\t",trans[i][j]);
			}
		printf("\n");
		}
		
	
	return 0;
	}

