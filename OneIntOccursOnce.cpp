#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"How many Elements you want to Enter : ";
    cin>>n;
    int a[n];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int XOR=0;
    for(int j=0;j<n;j++)
    {
        XOR = XOR ^ a[j];
    }
    cout<<"Occured once is :"<<XOR;
}