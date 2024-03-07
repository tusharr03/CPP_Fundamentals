#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int count=0;
    for(int i=1;i<=n;i=i*10)
    {
        if((n/i)!=0)
        {
            count=count+1;
        }
        else
        {
            continue;
        }
    }
    cout<<"Number of digtis in n is : "<<count<<endl;
    return 0;
}
