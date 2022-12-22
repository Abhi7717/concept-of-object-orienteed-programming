// Write a program in C++ to Print Fibonacci Series using recursion.
#include<iostream>
using namespace std;
int fib(int n)
{
   // if((n==1)||(n==0)) {
   //    return(n);
   // }else {
   //    return(fib(n-1)+fib(n-2));
   // }

   if (n <= 1)
        return n;
    return fib(n-1) + fib(n-2);
}
int main()
{
    int n,i=0,j;
    cout<<"enter the n number\n";
    cin>>n;
    while(i < n) {
      cout << " " << fib(i);
      i++;
    }
}
