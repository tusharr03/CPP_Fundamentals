#include<iostream>
using namespace std;

int get_length(char ch[])
{
    int count=0;
    for(int i=0;ch[i]!='\0';i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char ch[20];
    cout<<"Enter your name : "<<endl;
    cin>>ch;
    cout<<"Your name is : "<<ch<<endl;
    cout<<"Length of your name is : "<<get_length(ch);

    return 0;
}
