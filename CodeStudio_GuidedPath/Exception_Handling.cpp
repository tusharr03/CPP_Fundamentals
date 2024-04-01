#include<iostream>
using namespace std;

/*there are three keywords that we can use in exception handling
try
catch
throw*/

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
            throw age;
        }
    }
    catch(int age)
    {
        cout<<"sorry you are not eligible to vote"<<endl;
        cout<<"your age is : "<<age<<endl;
    }
    return 0;
}
