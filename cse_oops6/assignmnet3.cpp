#include<iostream>
using namespace std;

int mul();
int main()
{   int c;
    
    c=mul();
    cout<<"multiplicatoion = "<<c;
    return 0;
}
int mul()
{
    int a,b,c;
    cout<<"enter the value of a and b\n";
    cin>>a>>b;
    return a*b;
}
// nter the value of a and b
// 5
// 6
// multiplicatoion = 30
// PS C:\Users\KIIT\Desktop\c++\3rd sem CPP\oops lab\cse_oops6>