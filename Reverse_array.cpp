#include<iostream>
using namespace std;

void reverse(int arr[],int size)
{
    int start=0;
    int end=size-1;
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
};

void print_arr(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
};

int main()
{
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Original Araay: "<<endl;
    print_arr(arr,size);
    cout<<endl;
    reverse(arr,size);
    cout<<"Reverse of that Array :"<<endl;
    print_arr(arr,size);

    return 0;

}