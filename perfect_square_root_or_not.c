#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
        if (i*i==n)
        {
            c+=1;
            break;
        } 
    }
    if (c==0)
    {
        cout<<"False";
    }
    else
    {
     cout<<"True";   
    }
}
