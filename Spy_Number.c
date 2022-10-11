#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,r,sum=0,mul=1;
    cin>>n;
    while(n>0){
        r=n%10;
        sum+=r;
        mul*=r;
        n=n/10;
    }
    if (sum==mul){
        cout<<"Spy Number";
    }
    else{
        cout<<"Not Spy Number";
    }
}
