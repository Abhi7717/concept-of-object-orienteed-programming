// #include<iostream>
// #include<math.h>
// using namespace std;
// int find_area(int r)
// {

//     return 3.14159*r*r;
// }
// int find_area(int l,int b)
// {
//     return l*b;
// }
// float find_area(int a,int b,int c)
// {
// //  Area = √[s(s−a)(s−b)(s−c)]

// // Where, s = ½(a + b + c)
// int s=(a+b+c)/2;
// float area;
// area=sqrt(s*(s-a)*(s-b)*(s-c));
// return area;
// }
// int main()
// {
//     int r,l,b,a,z,c,area,ar;
//     float re;
//     cout<<"enter radius of the circle\n";
//     cin>>r;
//     area=find_area(r);
//     cout<<"enter the l and b of rectangle\n";
//     cin>>l>>b;
//     ar=find_area(l,b);
//     cout<<"enter the three side of the triangle\n";
//     cin>>a>>z>>c;
//     re=find_area(a,z,c);
//     cout<<"area of circel = "<<area;
//     cout<<"area of rectangle ="<<ar;
//     cout<<"area of the triangle = "<<re;
//     return 0;
//     }

    
// enter radius of the circle
// 5
// enter the l and b of rectangle
// 79
// 7
// enter the three side of the triangle
// 4
// 5
// 6
// area of circel = 78area of rectangle =553area of the triangle = 6.48074
// PS C:\Users\KIIT\Desktop\c++\3rd sem CPP\oops lab\cse_oops4> 
/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
class abhi{
  int a;
  int b;
  public:
  void getdata(int ,int );
  void setdata();
};

void abhi::getdata(int x,int y)
{
    a=x;
    b=y;
}

void abhi::setdata()
{
    cout<<a<<"\n";
    cout<<b<<"\n";
}


int main()
{
    // cout<<"Hello World";
    abhi h;
    h.getdata(5,10);
    h.setdata();
    return 0;
}
