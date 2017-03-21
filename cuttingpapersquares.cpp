#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int n,m,i,j,a,b,c;
    cin>>n>>m;
    n=a;m=b;
    int arr[n][m] ;
    for(i=0;i<n;i++)
        {
        for(j=0;j<m;j++)
            {
            cin>>arr[i][j];
        }
    }
    c=0;
    while(a!=1 && b!=1)
        {
        if(a>b)
            {
            a--;
        }
        else if(a<b)
            {
            b--;
        }
        else if(a%2==0)
            {
            a=a/2;
        }
        else if(b%2==0)
            {
            	b=b/2;
			}
		
        c++;
    }
    
    cout<<c;
	  
    return 0;
}

