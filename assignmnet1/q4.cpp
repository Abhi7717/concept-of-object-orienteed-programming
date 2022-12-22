// Write a program in C++ to count the digits of a given number using recursion.#include<iostream>
#include<iostream>
using namespace std;
int count(int n)
{
    int c=0;
    if(n>0)
    {
        c++;
        return c+count(n/10);
    }
    else 
    return 0;
}
int main()
{
    int n,i,j;
    cout<<"enter the n number\n";
    cin>>n;
    
    i=count(n);
    cout<<"count no. = "<<i;
}


// enter the n number
// 23456
// count no. = 5
// PS C:\Users\KIIT\Desktop\c++\3rd sem CPP\oops lab\assignmnet1> 