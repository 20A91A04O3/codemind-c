#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main(){
    int a,s=0;
    cin>>a;
    for (int i=1;i<=(a/2);i++){
        if (a%i==0){
            s+=i;
        }
    }
    if (s==a){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}