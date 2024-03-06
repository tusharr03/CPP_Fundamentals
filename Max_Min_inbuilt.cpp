#include<iostream>
#include<math.h>

using namespace std;

int get_Max(int arr[],int size)
{
    int a = INT64_MIN;
    for(int i=0;i<size;i++)
    {
        a =  max(a,arr[i]);
    }
    return a;
};

int get_Min(int arr[],int size)
{
    int a = INT64_MAX;
    for(int i=0;i<size;i++)
    {
        a =  min(a,arr[i]);
    }
    return a;
};


int main()
{
    int size;
    
    cout<<"Enter the number of elements you want to enter : "<<endl;
    cin>>size;
    int new_arr[size];

    for(int i=0;i<size;i++)
    {
        cin>>new_arr[i];
    }
    cout<<"The maximum value of given numbers is : "<<get_Max(new_arr,size)<<endl;
    cout<<"The minimum value of given numbers is : "<<get_Min(new_arr,size)<<endl;

    return 0;
}