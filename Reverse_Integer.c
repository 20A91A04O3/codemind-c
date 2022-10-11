#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k,j=0;
    cin>>k;
    if(k<0)
    {
        j++;
    }
    k=abs(k);
    
        int g=k,r=0;
        while(k>0)
        {
            int h=k%10;
            r=r*10+h;
            k=k/10;
        }
        if(j!=1)
        {
          cout<<r; 
        }
        else{
            cout<<(-r);
        }
}