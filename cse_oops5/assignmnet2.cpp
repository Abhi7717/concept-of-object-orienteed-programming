#include<iostream>
using namespace std;
class triangle{
    float base,height;
    public:
void setDimention(float,float);
// float find_perimeter();
void find_area();
};
void triangle::setDimention(float ba,float he)
{
    base=ba;
    height=he;
}

void triangle::find_area()
{
    float ar=0.0;
    ar=(base*height);
    // cout<<base<<"\n"<<height;
    cout<<"area ="<<ar/2;
}
int main()
{
    triangle t;
    float ar,ba,he;
    cout<<"enter the base and height\n";
    cin>>ba>>he;
        t.setDimention(ba,he);
        
        t.find_area();
        
}

// enter the base and height
// 8
// 6
// area =24