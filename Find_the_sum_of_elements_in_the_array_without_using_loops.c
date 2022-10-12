#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s1=0;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
        s1+=a[i];
    }
    cout<<s1;
}