#include <vector>
#include <cstring>
#include <cstdlib>
#include <iostream>

using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    int c[n];
    for(int i=0;i<n;i++)
        {
        int j=i;
        while(a[i]>0 && j<n)
            {
            if((a[i]-a[j])==0 || (a[i]-a[j])==1 || (a[i]-a[j])==(-1))
                {
                c[i]=a[i];
            }
            j++;
        }
    }
    int d=0;
    for(int i=0;i<n;i++)
        {
        int j=i;
        while(c[i]>0 && j<n)
            {
            if ((c[i]-c[j])==0 || (c[i]-c[j])==1 || (c[i]-c[j])==(-1))
                {
                d++;
            }
        }
    }
    cout<<d;
    return 0;
}

