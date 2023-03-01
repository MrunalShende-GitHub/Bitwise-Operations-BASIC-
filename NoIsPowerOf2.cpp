#include<bits/stdc++.h>
using namespace std;
int main()
{int n;
    cout<<"Enter number to check: ";
    cin>>n;
    if((n & (n-1))==0)
    {
    cout<<"Yes";
    }
    else
    {
    cout << "NO";
    }
}