#include<bits/stdc++.h>
#include<string>
using namespace std;
bool isprime(int a)
{
    int fc=0;
    for (int i=1;i<=a;i++)
    {
        if (a%i==0)
        {
            fc+=1;
        }
    }
    if (fc==2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n,c=0,a=0;
    int s[2];
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        if (n%i==0 && isprime(i))
        {
            c+=1;
            s[c-1]=i;
        }
    }
    if (c==2)
    {
        for (int i=0;i<2;i++)
        {
            cout<<s[i]<<" ";
        }
    }
    else
    {
        cout<<"-1";
    }
}