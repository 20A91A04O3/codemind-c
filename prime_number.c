#include <bits/stdc++.h>
#include<vector>
#include <algorithm>
using namespace std;
bool fun(int n)
{
    int c=0;
    for (int i=1;i<=n;i++)
    {
        if (n%i==0)
        {
            c+=1;
        }
    }
    if (c==2)
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
    int n;
    cin>>n;
    if(fun(n))
    {
        cout<<"prime";
    }
    else
    {
        cout<<"not a prime";
    }
}