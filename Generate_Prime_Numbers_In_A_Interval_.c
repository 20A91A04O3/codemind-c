#include <bits/stdc++.h>
#include<string>
#include <cmath>
using namespace std;
int isp(int n)
{
    int p=0;
    if(n<=1)
    {
        return 0;
    }
    for(int i=2;i<(int)sqrt(n)+1;i++)
    {
        if(n%i==0)
        {
            p++;
        }
    }
    if(p==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,n1;
    cin>>n;
    cin>>n1;
    for(int i=n;i<=n1;i++)
    {
        if(isp(i)==1)
        {
            cout<<i;
            printf("
");
        }
    }
}