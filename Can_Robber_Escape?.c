#include<iostream>
using namespace std;
int main(){
    int n,c=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]>=n){
            cout<<"NO";
            break;
        }
        else{
            c+=1;
    }
    if (c==n){
        cout<<"YES";
    }
}
}
