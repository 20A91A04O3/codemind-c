#include <bits/stdc++.h>
#include<string>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n>0)
    {
    int n1,v=1;
    cin>>n1;
    for(int i=1;i<=n1;i++)
    {
        v=v*i;
    }
    cout<<v;
    printf("
");
    n--;
    }
}