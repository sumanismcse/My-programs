#include <iostream>
using namespace std;
int main()
{
    int c=0,t=0,temp,n,remainder,base=1,binary=0;
    cin >> n;
    while(n!=0||n>0)
    {
        remainder=n%2;
        binary=binary+remainder*base;
        n=n/2;
        base=base*10;
    }
    while(binary>0)
    {
    temp=binary%10;
    if(temp==1)
    {
    c++;
    if(c>=t)
    {
    	t=c;
	}
	else
		c=0;
	}
    binary=binary/10;
    }
    cout << t;
    return 0;
}
