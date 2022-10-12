#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if (a%400==0)
    {
        cout<<"True";
    }
    else if (a%100==0)
    {
        cout<<"False";
    }
    else if (a%4==0)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
}