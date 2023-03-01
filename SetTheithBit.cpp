#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int x;
    int res;
    cout<<"Enter the number: ";
    cin>>n;
    cout << bitset<8>(n).to_string() << endl;
    cout<<"which bit you want to set: ";
    cin>>x;
    int a=1;
    a = a<<(x-1);
    res = n|a;
    cout<<res<<endl;
    cout << bitset<8>(res).to_string() << endl;
}