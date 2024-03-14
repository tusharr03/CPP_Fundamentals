#include<iostream>
#include<vector>
using namespace std;

void reverseArray(vector<int> &arr, int m)
{
    int start=m+1;
    int end=arr.size()-1;
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int element;
        cin>>element;
        arr.push_back(element);
    }
    int m;
    cin>>m;
    reverseArray(arr,m);
    return 0;

}
