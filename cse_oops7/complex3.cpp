#include<iostream>
using namespace std;

class complex
{
private:
    float real;
    float img;
public:
    void getdata(float a,float b)
    {
        real=a;
        img=b;
    }
    void add(complex c,complex c1)
    {   
        real=c.real+c1.real;
        img=c.img+c1.img;
    }

    void show()
    {
        cout<<real<<" +  i"<<img;
    }

};
int main()
{
    float n,m;
    complex c,c1;
    complex c3;
    cout<<"enter the real number\n";
    cin>>n;
    cout<<"enter the imaginary numebr\n";
    cin>>m;
    c.getdata(n,m);
     cout<<"enter tyhe real number\n";
    cin>>n;
    cout<<"enter the imaginary numebr\n";
    cin>>m;
    c1.getdata(n,m);
    c3.add(c,c1);

    c3.show();
}



// enter the real number
// 3
// enter the imaginary numebr
// 4
// enter tyhe real number
// 5
// enter the imaginary numebr
// 7
// 8 +  i11
// PS C:\Users\KIIT\Desktop\c++\3rd sem CPP\oops lab\cse_oops7>