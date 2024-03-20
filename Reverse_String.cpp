#include<iostream>
using namespace std;

void reverse(char ch[],int n)
{
    int start=0;
    int end=n-1;
    while(start<end)
    {
        swap(ch[start],ch[end]);
        start++;
        end--;
    }
}

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
    int len= get_length(ch);
    cout<<"Length of your name is : "<<len<<endl;
    reverse(ch,len);
    cout<<"Reversed String : ";
    cout<<ch;

    return 0;
}
