#include<iostream>
using namespace std;
struct complex
{
    public:
    float real;
    float img;
};
complex sum(struct complex x,struct complex y);
int main()
{
     complex c1,c2,c3,c;

     cout<<"enter the real part of complex1";
    cin>>c1.real;
    cout<<"enter the imaginay part complex 1";
    cin>>c1.img;
    
    cout<<"enter the real part complex 2";
    cin>>c2.real;
    cout<<"enter the imaginay part complex 2";
    cin>>c2.img;
    
     c3=sum(c1,c2);
      cout<<"sum = "<<c3.real<<" + i"<<c3.img;
    return 0;
}


 complex sum(complex x,complex y)
{
    complex z;
    z.real=x.real+y.real;
    z.img=x.img+y.img;
   return z;
}


// enter the real part of complex1
// 3
// enter the imaginay part complex 1
// 4
// enter the real part complex 2
// 4
// enter the imaginay part complex 2
// 5
// sum = 7 + i9
// PS C:\Users\KIIT\Desktop\c++\3rd sem CPP\oops lab\cse_oop2> 