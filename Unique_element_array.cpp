#include<iostream>

using namespace std;

int unique_num(int arr[],int size)
{
    int ans=0;
    for(int i=0;i<size;i++)
    {
        ans=ans^arr[i];
    }
    return ans;
};

int main()
{
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;
    int arr[size];
    // the input shoud be in the form of 2m+1 where m is the size of an array
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"The unique number in the given array is : "<<unique_num(arr,size)<<endl;

    return 0;
}