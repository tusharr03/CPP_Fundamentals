//stack memory and heap memory
//global variable are stored using heap memory

/*the memory allocation using heap memory is known as dynamic 
memory allocation , while the one using stack is known as compile
time memory allocation*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    //n is the array size
    //declaration of dynamic memory
    int *arr=new int[n];
    //for simple allocating variables dynamically
    int *var=new int;
    //new keyword is used to declare the dynamic memory in c++

    //the syntax for releasing an arry is
    delete [] arr;

    // the syntax for releasing the memory of the variable is
    delete var;
}
