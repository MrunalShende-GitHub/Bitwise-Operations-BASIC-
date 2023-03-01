#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cout<<"Enter number to check: ";
    cin >> n;
    while(n!=0)
    {
        n = n&(n-1);
        count++;
    }
    cout<<count;

} 