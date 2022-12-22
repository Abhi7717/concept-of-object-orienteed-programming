#include<iostream>
using namespace std;
void find_area(float radius)
{
 float    area=3.148*radius*radius;
cout<<" area = "<<area;

}
void find_perimeter(float radius)
{
 
float p=2*3.148*radius;

cout<<"perimeter ="<<p;
}
int main()
{ 
 float r,area,p;
//  int 
 cout<<"enter the radius of the circle\n";
cin>>r;
find_perimeter(r);
find_area(r);
return 0;
}

// enter the radius of the circle
// 4.5
// perimeter =28.332 area = 63.747
// PS C:\Users\KIIT\Desktop\c++\3rd sem CPP\oops lab\cse_oop2>