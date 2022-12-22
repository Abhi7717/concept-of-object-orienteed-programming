#include<iostream>
using namespace std;
int fact(int n)
{
    int p,f=1,i;
    if(n>0)
    return n*fact(n-1);
    else
    return 1;
}
int main()
{
int i,n,f=1;
cout<<"enter the numebr\n";
cin>>n;
f=fact(n);
cout<<"factorial : "<<f;
return 0;
}