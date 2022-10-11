#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=0,b=1,c=0,t,d=0;
    cin>>t;
    if (a==t || b==t)
    {
        cout<<"True";
    }
    for(int i=0;i<t;i++)
    {
        c=a+b;
        if (c==t)
        {
            cout<<"True";
            d+=1;
            break;
        }
        a=b;
        b=c;
        c=0;
    }
    if (d==0)
    {
        cout<<"False";
    }
}