#include<iostream>
#include<math.h>
using namespace std;
 class point
 {
 private:
    
    int x,y;
 public:
 point(){
    x=0;
    y=0;
 }

    point(int a,int b)
    {
    x=a;
    y=b;
 }
  point(point &h)
    {
    x=h.x;
    y=h.y;
 }
    void find_distance();
 };
 
 void point::find_distance()
 {
    int  d=0;
    d=sqrt((x*x)+(y*y));
    cout<<"distance  = "<<d<<endl;
 }
 

 
 int main()
 {

    int x,y;
    cout<<"enter the x \n";
    cin>>x;
    cout<<"enter the y \n";
    cin>>y;
    point z;
    z.find_distance();
    point a(x,y);
    a.find_distance();
    point b(a);
    b.find_distance();
 }



//  enter the x 
// 5
// enter the y 
// 6
// distance  = 0
// distance  = 7
// distance  = 7