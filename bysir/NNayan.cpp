#include<iostream>
using namespace std;

class Int
{
    public:
    long int x;
    Int (){}
    Int (int a)
    {
        x=a;
    }
    Int operator+(Int ob)
    {
        Int ob1;
        ob1.x=x+ob.x;
        cout<<"sum = "<<ob1.x;
        return ob1;
    }
    Int operator-(Int ob)
    {
        Int ob1;
        ob1.x=x-ob.x;
        cout<<"\nsubstraction = "<<ob1.x;
       
        return ob1;
    }
    Int operator*(Int ob)
    {
        Int ob1;
        ob1.x=x*ob.x;
         cout<<"\nmuly]tiplication = "<<ob1.x;
       
        return ob1;
    }
    Int operator/(Int ob)
    {
        Int ob1;
        ob1.x=x/ob.x;
         cout<<"\ndivision = "<<ob1.x;
        return ob1;
    }
};
int main()
{
    int i,j;
    cout<<"enter the two number\n";
    cin>>i>>j;
    if((i<2147483648)&& (i>-2147483648)&&(j<2147483648)&& (j>-2147483648))
    {
        Int ob1(i),ob(j),ob2;
        ob2=ob1+ob;
        ob2=ob1-ob;
        ob2=ob1*ob;
        ob2=ob1/ob;
    }
    else
    printf("stroge is tooo large\n");
    return 0;
}