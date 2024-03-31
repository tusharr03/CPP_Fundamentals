//malloc() function

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int *ptr=(int *)malloc(n*sizeof(int));
    /*malloc function returns a void pointer to the allocated 
    memory block's first byte*/
    for(int i=0;i<n;i++)
    {
        ptr[i]=i*2;
    }
    for(int i=0;i<n;i++)
    {
        cout<<*(ptr+i)<<endl;
        //cout<<ptr[i]<<endl;
        /*both of the lines gives the same output 
        you can use any of them*/
    }
    free(ptr);
    return 0;
}
