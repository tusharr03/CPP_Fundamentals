#include<iostream>
#include<math.h>
using namespace std;

int Maximum_of_n(int arr[], int size)
{
    int a = INT64_MIN;
    for(int i=0;i<size;i++)
    {
        if(a<arr[i])
        {
            a=arr[i];
        }
    }
    return a;
};

int Minimum_of_n(int arr[], int size)
{
    int b = INT64_MAX;
    for(int i=0;i<size;i++)
    {
        if(b>arr[i])
        {
            b=arr[i];
        }
        
    }
    return b;
};

int main()
{
    int size;
    cout<<"Enter the number of elements you want to add "<<endl;
    cin>>size;
    int mini[100];
    for(int i=0;i<size;i++)
    {
        cin>>mini[i];
    }
    cout<<"The maximum value of the given is : "<<Maximum_of_n(mini,size)<<endl;
    cout<<"The minimum value of the given is : "<<Minimum_of_n(mini,size)<<endl;
    
    return 0;   
}