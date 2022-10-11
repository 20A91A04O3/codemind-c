#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s,r,sum=0;
    cin>>n;
    s=n*n;
    while(s>0){
        r=s%10;
        sum=sum+r;
        s=s/10;
    }
    if (sum==n){
        cout<<"Neon Number";
    }
    else{
        cout<<"Not Neon Number";
    }
    }