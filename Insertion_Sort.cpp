#include<iostream>
using namespace std;

void Insertion_sort(int arr[],int size)
{
    for(int i=1;i<size;i++)
    {
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--)
        {
            if(arr[j]>temp)
            {
                arr[j+1]=arr[j];
            }
            else
            {
                break;
            }

        }
        arr[j+1]=temp;
    }
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
    cout<<"The sorted array is : "<<endl;
    Insertion_sort(arr,size);
    return 0;
}
