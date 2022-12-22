//by me simple complex program.
#include<iostream>
using namespace std;
class complex
{
    int num,denum;
    public:
    complex(){}
    complex(int x,int y)
    {
        num=x;
        denum=y;
    }
    void display()
    {
        cout<<num<<" /"<<denum<<endl;
    }
    complex operator +(int c)
    {
        complex c1;
        c1.num=num+(c*denum);
        c1.denum=denum;
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
   
    complex c1(i,j),c3;
    c3=c1+4;
    c3.display();
}


// enter the numerator
// 1
// enter the denominator
// 2
// 9 /2