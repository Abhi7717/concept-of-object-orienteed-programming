#include<iostream>
using namespace std;
class shape
{
public:

virtual void area()=0;
// {

// }

};
class circle:public shape
{
    int a;
public:
circle(int i)
{
    a=i;
}
void area()
{
    cout<<"circle area = "<<a*a;
}
};

class rectangle:public shape
{       
    int a,b;
public:
rectangle(int i,int j)
{
    a=i;b=j;
}
void area()
{
    cout<<"rectangle area = "<<a*b;
}
};

class  triangle:public shape
{
 int a;
    public:
    triangle(int x)
    {
        a=x;
    }
    void area()
    {
        cout<<"area of the triangle = "<<0.433*a*a<<endl;
    }
};

int main()
{

int i,j;
cout<<"enter the radius of the circle\n";
cin>>i;
circle c(i);
c.area();
cout<<"\nenter the side of the rectangle\n";
cin>>i>>j;
rectangle r(i,j);
r.area();
cout<<"\nenter the side of the triangle\n";
cin>>j;
triangle t(j);
t.area();
return 0;
}


// enter the radius of the circle
// 5
// circle area = 25
// enter the side of the rectangle
// 6
// 7
// rectangle area = 42
// enter the side of the triangle
// 8
// area of the triangle = 27.712


