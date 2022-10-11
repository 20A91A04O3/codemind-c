#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,s1=0;
    cin>>n;
    for (int i=1;i<=(n/2);i++)
    {
        if (n%i==0)
        {
            s1+=i;
        }
    }
    if (s1>n)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
}
