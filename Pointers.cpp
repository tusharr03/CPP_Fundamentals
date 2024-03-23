#include<iostream>

using namespace std;

int main()
{
    int num =5;
    cout<<num<<endl;
    //address of operator
    cout<<"address of num is  : "<<&num<<endl;
    //address in output is in hexadecimal format
    int *ptr=&num; //declaration of pointer
    //pointer will be of same type which type of value we are assigning to it
    cout<<*ptr<<endl;
    //*ptr value at corresponding address
    // * is the dereference operator
    cout<<ptr<<endl;
    cout<<"------------"<<endl;
    //pointer only saves the address of the repective data types so the size occupied by any pointer is same
    int *p=0;
    p=&num;
    cout<<p<<endl;
    cout<<*p<<endl;

    cout<<"-------------"<<endl;
    int *p1;
    p1=&num;
    (*p1)++;
    cout<<*p1<<endl;
    //copying a pointer
    int *q1;
    q1=p;
    cout<<q1<<"---"<<p1<<endl;
    cout<<*q1<<"---"<<*p1<<endl;
    cout<<"--------------"<<endl;

    //important concept
    int *t=&num;
    cout<<*t++<<endl;
    //incrementing to the next integer
    

    return 0;
}
