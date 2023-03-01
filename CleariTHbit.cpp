#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Which element you want to enter: ";
    cin>>n;
    cout << bitset<8>(n).to_string() << endl;
    cout << "which bit you want to clear?";
    int j;
    cin>>j;
    int a = 1;
    a = a<<(j-1);
    int x = ~a;
    int result = (n&x);
    cout <<result<<endl;
    cout<< bitset<8>(result).to_string() << endl;
}