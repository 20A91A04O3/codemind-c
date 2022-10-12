#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,a;
    cin>>l;
    cin>>a;
    for (int i=0;i<a;i++)
    {
        int w,h;
        cin>>w>>h;

        if (w<l || h<l )
        {
            cout<<"UPLOAD ANOTHER"<<endl;
        }
        else if(h==w)
        {
            cout<<"ACCEPTED"<<endl;
        }
        else
        {
            cout<<"CROP IT"<<endl;
        }
    }
}