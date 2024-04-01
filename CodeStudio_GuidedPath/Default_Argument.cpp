#include<iostream>
using namespace std;

int sum(int a,int b,int c=0 /*here c is the default argument*/)
{
    return a+b+c;
}

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<sum(a,b)<<endl; //c is assigned 0 by default
    cout<<sum(a,b,c)<<endl;
    return 0;
}
