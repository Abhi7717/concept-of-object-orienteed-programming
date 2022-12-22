#include<iostream>
using namespace std;
class shape
{
        public:
        int z;
        virtual void area()=0;
        // {

        // }
};
class square:public shape
{
    int a;
    public:
    square(int x)
    {
        a=x;
    }
    void area()
    {
        cout<<"area of the square "<<a*a<<endl;
    }

};
class rectangle:public shape
{
    int a,b;
    public:
    rectangle(int x,int y)
    {
        a=x;
        b=y;
    }
    void area()
    {
        cout<<"area of the rectangle = "<<a*b<<endl;
    }

};
class circle:public shape
{
    int a;
    public:
    circle(int x)
    {
        a=x;
    }
    void area()
    {
        cout<<"area of the circle ="<<3.147*a*a<<endl;
    }
};
class triangle:public shape
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
// square,rectangle,circle and triangle
int  main()
{
    shape *p;
    square s(5);rectangle r(6,7); circle c(6);triangle t(4);
    s.area();
    r.area();
    c.area();
    t.area();
}





// area of the square 25       
// area of the rectangle = 42  
// area of the circle =113.292 
// area of the triangle = 6.928