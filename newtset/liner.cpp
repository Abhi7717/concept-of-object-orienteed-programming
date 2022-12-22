#include<iostream>
using namespace std;
class LinearEquation
{
    public:
    int x_coeff;
    int y_coeff;
    int sum;
    LinearEquation(){}
    LinearEquation(int x,int y,int s)
    {
        x_coeff=x;
        y_coeff=y;
        sum=s;
    }
    float find_x(LinearEquation x)
    {
        float xx;
        // x=((m*d)-(b*n))/((a*d)-(b*c));
        xx=((sum*x.y_coeff)-(y_coeff*x.sum))/(float)((x_coeff*x.y_coeff)-(y_coeff*x.x_coeff));
        return xx;

    }
    float find_y(LinearEquation y)
    {
        float yy;
         // y=((a*n)-(m*c))/((a*d)-(b*c));
         yy=((x_coeff*y.sum)-(sum*y.x_coeff))/(float)((x_coeff*y.y_coeff)-(y_coeff*y.x_coeff));
         return yy;
    }
};
int main()
{
    int a,b,c,d,m,n;
    float x,y;
    cout<<"enter the 1st equation x coeff. \n";
    cin>>a;
    cout<<"enter the 1st equation y coeff. \n";
    cin>>b;
    cout<<"enter the 1st equation sum coeff. \n";
    cin>>m;
    cout<<"enter the 2st equation x coeff. \n";
    cin>>c;
    cout<<"enter the 2st equation y coeff. \n";
    cin>>d;
    cout<<"enter the 2st equation sum coeff. \n";
    cin>>n;
    LinearEquation ob(a,b,m),ob1(c,d,n);
        x=ob.find_x(ob1);
        y=ob.find_y(ob1);

        cout<<"x = "<<x;
        cout<<"y = "<<y;
        return 0;
}