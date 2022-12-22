// Write a program in C++ to calculate the power of any number using recursion.

#include<iostream>
using namespace std;
int pow(int n,int j)
{
    if(j>0)
    {
        return n*pow(n,j-1);
    }
    else 
    return 1;
}
int main()
{
    int n,i,j;
    cout<<"enter the n number\n";
    cin>>n;
    cout<<"enter the power number\n";
    cin>>j;
    i=pow(n,j);
    cout<<"sum = "<<i;
}

// enter the n number
// 2
// enter the power number
// 3
// sum = 8
// PS C:\Users\KIIT\Desktop\c++\3rd sem CPP\oops lab\assignmnet1>