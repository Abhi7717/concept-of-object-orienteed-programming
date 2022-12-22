#include<iostream>
#include<math.h>
using namespace std;
class triangle1{
    private:
float find_perimeter();
    float a,b,c;
    public:
void setDimention(float,float,float);
void find_area();
float perimeter();
// {
//    return find_perimeter();   
// }
};
float triangle1::perimeter()
{
   return find_perimeter();   
}

void triangle1::setDimention(float aa,float bb,float cc)
{
    a=aa;
    b=bb;
    c=cc;
}


void triangle1::find_area()
{
    // √s(s - a)(s - b)(s - c) where s is half the perimeter, or (a + b + c)/2.
    float ar=0.0,s;
    s=(a+b+c)/2;
    ar=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"area = "<<ar;
}

float triangle1::find_perimeter()
{
    float peri;
    peri=(a+b+c);
    return peri;
}

// void triangle1::perimeter()
// {
//      triangle1::find_perimeter();
// }

int main()
{
    triangle1 t;
    float a,b,c,per;
    cout<<"enter the three side of the triangle\n";
    cin>>a>>b>>c;
        t.setDimention(a,b,c);
        per=t.perimeter();
        t.find_area();
        cout<<"perimeter = "<<per;
}   

// /enter the three side of the triangle
// 5
// 6
// 7
// area = 14.6969perimeter = 18