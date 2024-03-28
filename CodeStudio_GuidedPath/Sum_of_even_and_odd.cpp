#include <iostream>
using namespace std;

int count_num(int num)
{
    if(num==0)
    {
        return 1;
    }
    int count=0;
    while(num!=0)
    {
        num=num/10;
        count++;
    }
    return count;
}

int main() {
    //Write your code here
    int num;
    cin>>num;
    int odd_sum=0;
    int even_sum=0;
    int size=count_num(num);
    while(num!=0)
    {
        int a=num%10;
        if(a%2==0)
        {
            even_sum=even_sum+a;
        }
        else
        {
            odd_sum=odd_sum+a;
        }
        num=num/10;
    }
    cout<<even_sum<<" "<<odd_sum;  

    return 0;
}
