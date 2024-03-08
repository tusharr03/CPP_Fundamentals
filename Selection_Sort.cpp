#include<iostream>
using namespace std;

void selection_sort(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        int min_index=i;
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]<arr[min_index])
            {
                min_index=j;
            }
        }
        swap(arr[i],arr[min_index]);
    }
}

void print_array(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    selection_sort(arr,size);
    cout<<"Sorted Array is : "<<endl;
    print_array(arr,size);
    return 0;
}
