#include<bits/stdc++.h>
using namespace std;
template<typename T>
T myMax(T x,T y)
{
    return(x>y)?x:y;
}

int main()
{
    cout<<myMax<int>(5,7)<<endl;
    cout << myMax<char>('m','k')<<endl;
    return 0;
}