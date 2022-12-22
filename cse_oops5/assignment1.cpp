#include<iostream>
using namespace std;
class circle{
    int i,j,n;
    float radius;
    public:
void setRadius(float radius);
float find_perimeter();
float find_area();
};
void circle::setRadius(float a)
{
    radius =a;
}
float circle::find_perimeter(){
    float p;
    p=2*3.14159*radius;
    return p;
}
float circle::find_area(){
    float ar;
    ar=3.14159*radius*radius;
    return ar;
}
int main()
{
    circle c;
    float a,ar,p;
    cout<<"enter the radius\n";
    cin>>a;
        c.setRadius(a);
        p=c.find_perimeter();
        ar=c.find_area();
        cout<<"perimeter = "<<p<<"\n";
        cout<<"area ="<<ar<<"\n";

}

// enter the radius
// 4.5
// perimeter = 28.2743
// area =63.6172      