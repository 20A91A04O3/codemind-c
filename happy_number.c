#include <bits/stdc++.h>
#include<vector>
#include <algorithm>
using namespace std;
int fun(int n)
{
    int c=0;
    while(n>0)
    {
        int k=n%10;
        c=c+(k*k);
        n=n/10;
    }
    return c;
}
int main()
{
    int n;
    cin>>n;
    while(n>9)
    {
        n=fun(n);
    }
    if(n==1 || n==7)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
    
}