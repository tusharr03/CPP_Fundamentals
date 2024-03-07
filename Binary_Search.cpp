//Binary Search
// in this type of search technique the search can takes place only on the monotomic functions

#include<iostream>
using namespace std;

int binary_search(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
    for(int i=0;i<size;i++)
    {
        int mid=((start+end)/2);
        if(key==arr[mid])
        {
            return mid;
        }
        else if(key>arr[mid])
        {
            start=mid;
            mid=((start+end)/2);
        }
        else if(key<arr[mid])
        {
            end=mid;
            mid=((start+end)/2);
        }
    }
    return -1;
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
    int key;
    cin>>key;
    cout<<"Key found at index : "<<binary_search(arr,size,key);

    return 0;
}
