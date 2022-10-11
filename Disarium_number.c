#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,r,s1=0,co,s2;
    cin>>a;
    s2=a;
    co=(int)log10(a)+1;
    while(a>0)
    {
        r=a%10;
        s1=s1+pow(r,co);
        a=a/10;
        co-=1;
    }
   if (s1==s2)
   {
       cout<<"True";
   }
   else
   {
       cout<<"False";
   }
}