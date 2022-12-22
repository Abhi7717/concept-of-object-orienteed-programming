#include<iostream>
using namespace std;
void find_a_p(float &,float &,float ,float);
int main()
{
       float l,b,area,peri;
    cout<<"enter the length and the breath \n";
    cin>>l>>b;
    
    find_a_p(l,b,area,peri);
    return 0;
}
void find_a_p(float &l,float &b,float area,float peri)
{
    area=l*b;
    peri=2*(l+b);
    cout<<"area = "<<area<<"perimeter = "<<peri;
}




// enter the length and the breath 
// 4
// 6
// area = 24perimeter = 20
// PS C:\Users\KIIT\Desktop\c++\3rd sem CPP\oops lab\cse_oops3> 