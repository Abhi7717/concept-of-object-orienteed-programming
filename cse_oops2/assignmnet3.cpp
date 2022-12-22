#include<iostream>
 #include<cmath>
using namespace std;
int main()
{
    float a,b,c,q,q1;
    cout<<"enter the coefficiebt ifd the quadratic equation a,b,c\n";
    cin>>a>>b>>c;
    q=((-1)*b+sqrt((b*b)-(4*a*c)))/(2*a);
    q1=((-1)*b-sqrt((b*b)-(4*a*c)))/(2*a);
    cout<<"value of x1 : "<<q;
    cout<<"\n value of x2 : "<<q1;
    return 0;

}


// enter the coefficiebt ifd the quadratic equation a,b,c
// 2
// -5
// 2
// value of x1 : 2
//  value of x2 : 0.5
// PS C:\Users\KIIT\Desktop\c++\3rd sem CPP\oops lab\cse_oop2> 