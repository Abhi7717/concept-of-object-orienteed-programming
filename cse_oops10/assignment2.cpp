//by me simple complex program.
#include<iostream>
using namespace std;
class complex
{
    int real,img;
    public:
    complex(){}
    complex(int x,int y)
    {
        real=x;
        img=y;
    }
    void display()
    {
        cout<<real<<" +"<<img<<" i"<<endl;
    }
    complex operator +(complex c)
    {
        complex c1;
        c1.real=real+c.real;
        c1.img=img+c.img;
        return c1;
    }
};
main()
{
    int i,j,k,l;
    cout<<"enter the numerator\n";
    cin>>i;
    cout<<"enter the denominator\n";
    cin>>j;
    cout<<"enter the numerator\n";
    cin>>k;
    cout<<"enter the denominator\n";
    cin>>l;
    complex c1(i,j),c2(k,l),c3;
    c3=c1.operator+(c2);//c3=c1+c2;
    c3.display();
}


// enter the numerator
// 4
// enter the denominator
// 5
// enter the numerator
// 7
// enter the denominator
// 8
// 11 +13 i