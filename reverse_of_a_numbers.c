#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0,r;
    cin>>n;
    while(n>0)
    {
        r=n%10;
        c=c*10+r;
        n=n/10;
    }
    cout<<c;
}
