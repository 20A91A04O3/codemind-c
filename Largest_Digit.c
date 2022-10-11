#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,s1=0;
    cin>>n;
    while(n>0)
    {
        r=n%10;
        if (r>s1)
        {
            s1=r;
        }
        n=n/10;
    }
    cout<<s1;
}
