#include<iostream>
using namespace std;
void find_sum(int terms)
{
    float sum;
 for(float i=1;i<=terms;i++)
    {
        sum=sum +(1/i);
    }
    cout<<"sum : "<<sum;
}
int main()
{
    float n,i;
    float sum=0;
    cout<<"enter the value of n : \n";
    cin>>n;
    find_sum(n);
   return 0;
}

// enter the value of n : 
// 4
// sum : 2.08333
// PS C:\Users\KIIT\Desktop\c++\3rd sem CPP\oops lab\cse_oop2>

