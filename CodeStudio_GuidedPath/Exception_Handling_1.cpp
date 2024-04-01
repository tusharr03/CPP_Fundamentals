#include<iostream>
using namespace std;

/*We can also use the throw keyword to output 
a reference number, like a 
custom error number/code for organizing purposes:*/

int main()
{
    try{
        int age;
        cin>>age;
        if(age>=18)
        {
            cout<<"you are eligible to vote."<<endl;
        }
        else
        {
            throw -1;
        }
    }
    catch(int num)
    {
        cout<<"sorry you are not eligible to vote"<<endl;
        cout<<"Error "<<num<<endl;
    }
    return 0;
}
