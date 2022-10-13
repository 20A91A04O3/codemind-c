#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,n1,r=0;
    cin>>n;
    n1=n;
    while(n>0)
    {
        int k=n%10;
        r=r*10+k;
        n=n/10;
    }
    if(n1==r)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
}