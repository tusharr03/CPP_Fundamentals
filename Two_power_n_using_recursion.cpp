#include<iostream>

using namespace std;

int poweroftwo(int n)
{
    if(n==0)
    {
        return 1;
    }
    return 2*poweroftwo(n-1);
}

int main()
{
    int n;
    cin>>n;
    int ans = poweroftwo(n);
    cout<<ans<<endl;
    return 0;
}
