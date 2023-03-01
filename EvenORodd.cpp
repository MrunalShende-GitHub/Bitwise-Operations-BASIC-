#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    if((n & 1) == 0)
    {
        cout<<"Even";
    }
    else
    cout<<"odd";
}