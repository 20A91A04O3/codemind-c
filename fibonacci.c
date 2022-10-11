#include<iostream>
using namespace std;
int main()
{
    int a=0,b=1,c=0,t;
    cin>>t;
    cout<<a<<" "<<b<<" ";
    for (int i=0;i<(t-2);i++)
    {
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
        c=0;
    }
}