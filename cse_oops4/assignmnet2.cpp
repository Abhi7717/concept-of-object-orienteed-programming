#include<iostream>
using namespace std;
int main()
{
    int i,f=1,n,p;
    cout<<"enter the number\n";
    cin>>n;
    p=n;
    for ( i = p; i >=1; i--)
    {
        /* code */
        f*=i;
    }
    cout<<" factorial = "<<f;
    return 0;
    
}