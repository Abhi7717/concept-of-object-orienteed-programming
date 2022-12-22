#include<iostream>
using namespace std;
 inline int square(int n)
{
    return n*n;
}
int main()
{
    int n,m;
    cout<<"enter the number\n";
    cin>>n;
    for(int i=1;i<=n;i++){
    m=square(i);
    cout<<"square = "<<m<<"\n";
    }
    return 0;
}