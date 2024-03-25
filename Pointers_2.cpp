#include<iostream>

using namespace std;

int main()
{
    int arr[10]={0};
    arr[1]=5;
    cout<<"address of first memory block is : "<<arr<<endl;
    cout<<"address of first memory block is : "<<&arr[0]<<endl;
    cout<<arr[0]<<endl;
    cout<<"4th : "<<*arr<<endl;
    cout<<"5th : "<<*arr+1<<endl;
    cout<<"6th : "<<*arr+2<<endl;
    cout<<"7th : "<<*(arr+1)<<endl;

    int i=1;
    cout<<i[arr]<<endl;
    //arr[i]=*(arr+i) or we can say i[arr]=*(i+arr) both of the conditions are same and throw the same output

    int *ptr;
    ptr=&arr[0];
    cout<<ptr<<endl;
    cout<<&ptr<<endl;
    cout<<*ptr<<endl;
    ptr=ptr+1;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;


//character array

    char ch1[10];
    char *ch;


    return 0;
}
