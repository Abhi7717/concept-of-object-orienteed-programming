#include<iostream>
using namespace std;


int mul(int a,int b)
{
    return a*b;
}
int main()
{
    int a,b,c;
    cout<<"enter the value of a and b\n";
    cin>>a>>b;
    c=mul(a,b);
    cout<<"multiplication = "<<c;
    return 0;
}

// enter the value of a and b
// 6
// 6
// multiplication = 36
// PS C:\Users\KIIT\Desktop\c++\3rd sem CPP\oops lab\cse_oops6>