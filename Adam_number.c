#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s1,s2,n1=0,r,s;
    cin>>n;
    s=n;
    s1=(n*n);
    while(n>0)
    {
        r=n%10;
        n1=n1*10+r;
        n=n/10;
    }
    s2=(n1*n1);
    int s3=0,r1;
    while(s2>0)
    {
        r1=s2%10;
        s3=s3*10+r1;
        s2=s2/10;
    }
    if (s3==s1)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
}