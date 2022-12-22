#include<iostream>
using namespace std;
struct complex
{
    public:
    float real;
    float img;
};
void sum(struct complex,struct complex);
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
        sum(c1,c2);
      return 0;
}
 void sum(complex x,complex y)
{
    complex z;
    z.real=x.real+y.real;
    z.img=x.img+y.img;
   cout<<"sum = "<<z.real<<" + i"<<z.img;
}
//  enter the real part of complex1
// 3
// enter the imaginay part complex 1
// 4
// enter the real part complex 2
// 5
// enter the imaginay part complex 2
// 6
// sum = 8 + i10
// PS C:\Users\KIIT\Desktop\c++\3rd sem CPP\oops lab\cse_oop2> 
