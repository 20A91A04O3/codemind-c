#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,n1;
    cin>>n>>n1;
    for(int i=1;i<=n1;i=i+2)
    {
        cout<<n<<" x "<<i<<" = "<<n*i<<endl;
    }
}