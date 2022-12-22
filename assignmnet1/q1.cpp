// Write a program in C++ to calculate the sum of numbers from 1 to n using recursion.
#include<iostream>
using namespace std;
int sum(int n)
{
    if(n>1)
    {
        return n+sum(n-1);
    }
    else 
    return 1;
}
int main()
{
    int n,i,j;
    cout<<"enter the n number\n";
    cin>>n;
    i=sum(n);
    cout<<"sum = "<<i;
}