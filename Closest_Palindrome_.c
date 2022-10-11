#include<bits/stdc++.h>
using namespace std;
bool ispalin(int n)
{
    int temp=n,sum=0;
    while(n)
    {
        int r=n%10;
        sum=(sum*10)+r;
        n/=10;
    }
    if(sum==temp)
    {
        return true;
    }
    return false;
}

int main()
{
    int n,d=0;
    cin>>n;
    for(int i=n-1;i>0;i--)
    {
        if(ispalin(i))
        {
            d=i;
            break;
        }
    }
    int d1=0;
    for(int i=n+1;i<=n*5;i++)
    {
        if(ispalin(i))
        {
            d1=i;
            break;
        }
    }
    int dif=n-d;
    int diff=d1-n;
    if(diff==dif)
    {
        cout<<d<<" "<<d1;
    }
    else if(dif>diff)
    {
        cout<<d1<<endl;
    }
    else
    {
        cout<<d;
    }
}