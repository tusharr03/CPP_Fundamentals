#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the value of a and b: "<<endl;
    cin>>a>>b;
    cout<<"value of a & b = "<<(a&b)<<endl;
    cout<<"value of a | b = "<<(a|b)<<endl;
    cout<<"value of ~ a  = "<<~a<<endl;
    cout<<"value of a ^ b = "<<(a^b)<<endl;
 

    cout<<" 17 >> 1 = "<<(17>>1)<<endl;
    cout<<" 17 >> 2 = "<<(17>>2)<<endl;
    cout<<" 19 >> 1 = "<<(19>>1)<<endl;
    cout<<" 19 >> 2 = "<<(19>>2)<<endl;

    cout<<" 19 << 1 = "<<(19<<1)<<endl;
    cout<<" 19 << 2 = "<<(19<<2)<<endl;
    return 0;
}
