#include<iostream>
using namespace std;

/*Handle Any Type of Exceptions: The following program 
consists of a ‘generalized’ catch block to catch any 
uncaught errors/exceptions by using the ‘three dots’ 
syntax(. . .) inside the catch 
block that takes care of all types of exceptions.*/

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
            throw "Error Found";
        }
    }
    catch(...)
    {
        cout<<"sorry you are not eligible to vote"<<endl;
        cout<<"Error Found"<<endl;
    }
    return 0;
}
