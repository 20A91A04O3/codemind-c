#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main(){
    float a,b,c;
    float s,area,area1;
    cin>>a>>b>>c;
    s=(a+b+c)/2;
    area=(s*(s-a)*(s-b)*(s-c));
    area1=sqrt(area);
    cout<<fixed<<setprecision(2)<<area1;
}
