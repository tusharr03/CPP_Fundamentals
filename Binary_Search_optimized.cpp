#include<iostream>
using namespace std;

void bubble_sort(int arr[],int size)
{
    bool swapped=false;
    for(int i=1;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false)
        {
            cout<<"The array is already sorted "<<endl;
            break;
        }
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
    bubble_sort(arr,size);
    cout<<"The sorted array is : "<<endl;
    print_array(arr,size);
    return 0;
}
