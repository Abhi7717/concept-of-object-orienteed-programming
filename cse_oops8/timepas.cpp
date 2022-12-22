#include<iostream>
using namespace std;
class A
{
    int i;
    // public :
    // virtual void show()
// {
// 
// }
};
class B: public A
{
    // int i;
    void show()
    {

    }
};
class C: public A
{
    public :
    void show()
    {

    }
};
main()
{
    A x;
    B y;
    C z;
    cout<<sizeof(x)<<endl;
    cout<<sizeof(y)<<endl;
    cout<<sizeof(z)<<endl;
}