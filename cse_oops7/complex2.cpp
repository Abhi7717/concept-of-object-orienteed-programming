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
void show(void);
// {
//     cout<<real<<" + i"<<img<<"\n";

// }
};

void complex::getdata(float f,float f1)
{
    
    real=f;
    img=f1;
}
void complex::show(void)
{
    cout<<real<<" + i"<<img<<"\n";

}


int main()
{
    complex c1[5];
    float r,j;
    // cout<<"enter the real number\n";
    // cin>>r;
    // cout<<"enter the imaginary number\n";
    // cin>>i;
    for(int i=0;i<5;i++){
        cout<<"enter the real number\n";
    cin>>r;
    cout<<"enter the imaginary number\n";
    cin>>j;
    c1[i].getdata(r,j);
    
    }
    for(int i=0;i<5;i++)
    c1[i].show();
    return 0;
}


// enter the real number
// 2
// enter the imaginary number
// 3
// enter the real number
// 4
// enter the imaginary number
// 5
// enter the real number
// 6
// enter the imaginary number
// 7
// enter the real number
// 8
// enter the imaginary number
// 9
// enter the real number
// 1
// enter the imaginary number
// 2
// 2 + i3
// 4 + i5
// 6 + i7
// 8 + i9
// 1 + i2