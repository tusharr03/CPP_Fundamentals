//calloc() function

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    /*calloc sets all the bits of the allocated memory
    to zero and returns a pointer to the allocated block's
    first byte*/
    int *ptr=(int *)calloc(n,sizeof(int));
    for(int i=0;i<n;i++)
    {
        //ptr[i]=i*2;
    }
    for(int i=0;i<n;i++)
    {
        cout<<ptr[i]<<endl;
    }
    free(ptr);
    return 0;
}

