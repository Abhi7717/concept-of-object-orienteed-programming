#include<iostream>
using namespace std;
int main()
{
    float n,i;
    float sum=0;
    cout<<"enter the value of n : \n";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum=sum +(1/i);
    }
    cout<<"sum : "<<sum;
}


// enter the value of n : 
// 4
// sum : 2.08333
// PS C:\Users\KIIT\Desktop\c++\3rd sem CPP\oops lab\cse_oop2>