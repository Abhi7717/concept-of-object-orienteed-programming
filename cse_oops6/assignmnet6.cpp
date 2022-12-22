#include<iostream>
#include<math.h>
using namespace std;
float find_area(float);
float find_area(float,float);
float find_area(float,float,float);
int main()
{
    int a,b,c,d;
    cout<<"enter the radius\n";
    cin>>a;
    d=find_area(a);
    cout<<"area of circle = "<<d;
    cout<<"\nenter the length and breath\n";
    cin>>a>>b;
d=find_area(a,b);
cout<<"area if rectangle = "<<d;
    cout<<"\nente the 3 side of the triangle\n";
    cin>>a>>b>>c;
    d=find_area(a,b,c);
    cout<<"area of the triangle ="<<d;
    return 0;
}
float find_area(float a)
{
    float ar=0;
    ar=3.14159*a*a;
    return ar;
}
float find_area(float a,float b)
{
    float ar=0;
    ar=a*b;
    return ar;
}
float find_area(float a,float b,float c)
{
    // √s(s - a)(s - b)(s - c) where s is half the perimeter, or (a + b + c)/2.
    float ar=0.0,s;
    s=(a+b+c)/2;
    ar=sqrt(s*(s-a)*(s-b)*(s-c));
    return ar;
}

// enter the radius
// 5
// area of circle = 78        
// enter the length and breath
// 5
// 6
// area if rectangle = 30
// ente the 3 side of the triangle
// 7
// 8
// 9
// area of the triangle =26
// PS C:\Users\KIIT\Desktop\c++\3rd sem CPP\oops lab\cse_oops6>