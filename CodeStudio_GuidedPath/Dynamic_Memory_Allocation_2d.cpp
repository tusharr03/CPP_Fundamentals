#include<iostream>
using namespace std;

int main()
{
    //creation of a 2d array
    int n,m;
    cin>>n>>m;
    //n and m are the size of the 2d array
    int **arr=new int*[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=new int[m];
    }

    //deleting the array with the following syntax
    for(int i=0;i<n;i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}
