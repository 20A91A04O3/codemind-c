#include<iostream>
using namespace std;
int main()
{
    string s;
    int h;
    cin>>s;
    h=s.length();
    for(int i=0;i<h;i++){
        if (s[i]=='6'){
            s[i]='9';
            break;
        }
    }
    cout<<s;
}
