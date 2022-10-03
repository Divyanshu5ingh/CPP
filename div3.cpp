#include<iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;

    if(num%3 == 0)
    {
        cout<<num*num<<endl;
    }
    else if (num%3 == 1)
    {
        cout<<num*num*num<<endl;

    }
    else if (num%3 == 2)
    {
        cout<<num*2<<endl;
    }
    return 0;
}