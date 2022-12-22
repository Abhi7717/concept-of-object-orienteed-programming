#include<iostream>
using namespace std;
    
class complex
{
private:
    /* data */
    int real;
    int img;
public:
  void getdata(float,float);
void show(void)
{
    cout<<real<<" + i"<<img;

}
};

void complex::getdata(float f,float f1)
{
    
    real=f;
    img=f1;
}



int main()
{
    complex c1;
    float r,i;
    cout<<"enter the real number\n";
    cin>>r;
    cout<<"enter the imaginary number\n";
    cin>>i;
    c1.getdata(r,i);
    c1.show();

    return 0;
}


// enter the real number
// 5
// enter the imaginary number
// 8
// 5 + i8