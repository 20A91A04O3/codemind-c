#include <bits/stdc++.h>
#include<vector>
#include <algorithm>
using namespace std;
int main()
{
    int n,g;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>g;
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>c)
        {
            c=a[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]+g>=c)
        {
            cout<<"True ";
        }
        else
        {
            cout<<"False ";
        }
    }
}