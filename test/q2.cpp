#include<iostream>
using namespace std;
template <class X>X largest(X a,X b)
{
    if(a>b)
    return a;
    else
    return b;
}
main()
{
    int i;
    float j;
    i=largest<int>(5,6);
    j=largest<float>(5.8,6.7);
    cout<<i<<endl;
    cout<<j<<endl;
}


// 6
// 6.7