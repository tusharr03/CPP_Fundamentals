#include<iostream>

using namespace std;

//print numbers from n to 1
void print(int n)
{
    if(n==0)
    {
        return;
    }
    
    cout<<n<<endl;
    print(n-1);
}

//Print numbers from 1 to n
// void print(int n)
// {
//     if(n==0)
//     {
//         return;
//     }
//     print(n-1);
//     cout<<n<<endl;
// }

int main()
{
    int n;
    cin>>n;
    cout<<endl;
    print(n);
    return 0;

}
