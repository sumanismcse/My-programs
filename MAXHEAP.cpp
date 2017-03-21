#include<stdio.h>
int main()
{
	int n,root,i,j;root=0;
	printf("Enter size of A\n");
	scanf("%d",&n);
	int A[n];
	printf("Enter elements of heap:\n");
	for(i=0;i<n;i++)
	{
		printf("Enter the elements for %d node:",i+1);
		scanf("%d",&A[i]);
	}
	for(i=0;i<n;i++)
	{
	j=i;
	do
	{
		root=(j-1)/2;
		if(A[root]<A[j])
		{
			int temp;
			temp=A[root];
			A[root]=A[j];
			A[j]=temp;
		}
		j=root;
	}while(j!=0);
	}
	printf("The Heap Changed into max heap:");
	for(i=0;i<n;i++)
	{
		printf("%d\n",A[i]);
	}
	printf("Enter element and location to be inserted :");
	int num,parentnode,location;
	scanf("%d %d",&num,&location);
	while(location>0)
	{
		parentnode=(location-1)/2;
	if (num <= A[parentnode])
        {
            A[location] = num;
            return 0;
        }
        A[location] = A[parentnode];
        location = parentnode;
	}
	A[0]=num;
	n=n+1;
	for(i=0;i<n+1;i++)
	{
		printf("New inserted array:%d\n",A[i]);
	}
	printf("Enter no. to be deleted:");
	int no,left,right,temp;
	scanf("%d",&no);
	 for (i = 0; i < no; i++) {
        if (no == A[i])
            break;
    }
    if (no != A[i])
    {
        printf("%d not found in heap list\n", no);
        return 0;
    }
    A[i] = A[n - 1];
    n = n - 1;
    parentnode =(i - 1) / 2; 
    if (A[i] > A[parentnode])
    {
    	int par,t=i;
        while(t>0)
        {
        	par=(t-1)/2;
        	if(A[i]<=A[par])
        	{
        		A[t]=A[i];
        	}
        	A[t]=A[par];
        	t=par;
        }
        A[0]=A[i];
        n=n+1;
        return 0;
    }
    left = 2 * i + 1; 
    right = 2 * i + 2; 
    while (right < n)
    {
        if (A[i] >= A[left] && A[i] >= A[right])
            return 0;
        if (A[right] <= A[left])
        {
            temp = A[i];
            A[i] = A[left];
            A[left] = temp;
            i = left;
        }
        else
        {
            temp = A[i];
            A[i] = A[right];
            A[right] = temp;
            i = right;
        }
        left = 2 * i + 1;
        right = 2 * i + 2;
    }
    if (left == n - 1 && A[i])    {
        temp = A[i];
        A[i] = A[left];
        A[left] = temp;
    }
    for(i=0;i<n;i++)
    {
    	printf("New Deleted Array:%d\n",A[i]);
    }
return 0;
}
