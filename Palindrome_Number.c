#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        int s,r,sum=0;
        s=a;
        while(s>0)
        {
            r=s%10;
            sum=sum*10+r;
            s=s/10;
        }
        if (sum==a)
        {
            cout<<"True"<<endl;
        }
        else{
            cout<<"False"<<endl;
        }
    }
}
