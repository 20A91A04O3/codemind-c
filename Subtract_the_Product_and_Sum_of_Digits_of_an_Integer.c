#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,r;
    cin>>n;
    int sum=0,mul=1;
    while(n>0){
        r=n%10;
        sum+=r;
        mul*=r;
        n=n/10;
    }
    cout<<mul-sum;
}

