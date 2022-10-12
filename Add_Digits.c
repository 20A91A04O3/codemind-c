#include <iostream>
#include <algorithm>
using namespace std;
int fun(int n)
{
    int f=0;
    while(n>0)
    {
        int k=n%10;
        f=f+k;
        n=n/10;
    }
    return f;
    
}
int main()
{
    int n;
    cin>>n;
    int s=0,p=1;
    while(n>9)
    {
        n=fun(n);
    }
   cout<<n;
}