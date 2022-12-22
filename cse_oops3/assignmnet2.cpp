#include<iostream>
using namespace std;
int &max(int &x,int &y);
int main()
{
    int a,b,c,d;
    cout<<"enter the 4 number \n";
    cin>>a>>b>>c>>d;
    cout<<"max = "<<max(max(max(a,b),c),d);
}
int &max(int &x,int &y)
{
    if(x>y)
    return x;
    else
    return y;
}

// enter the 4 number 
// 1
// 2
// 5
// 7
// max = 7
// PS C:\Users\KIIT\Desktop\c++\3rd sem CPP\oops lab\cse_oops3> 