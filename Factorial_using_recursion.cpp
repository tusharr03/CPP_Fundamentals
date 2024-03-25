#include<iostream>

using namespace std;

int factorial(int n)
{
    //base case
    if(n==0)
    {
        return 1;
    }
    int st=factorial(n-1);
    int en=n*st;
    return en;
}

int main()
{
    int n;
    cin>>n;

    int ans=factorial(n);
    cout<<ans<<endl;

    return 0;
}
