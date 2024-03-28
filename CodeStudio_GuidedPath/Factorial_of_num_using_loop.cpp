#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int n;
    cin>>n;
    int ans=1;
    if(n<0)
    {
        cout<<"Error";
    }
    else if(n==0)
    {
        cout<<1;
    }
    else
    {
        for(int i=n;i>0;i--)
        {
            ans=ans*i;
        }
        cout<<ans;
    }
    
    return 0;
}
