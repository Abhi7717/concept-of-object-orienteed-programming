#include<iostream>
#include<string.h>
using namespace std;
class abh
{
    public:
    int num;
    int denum;
    abh(){}
    abh(int x,int y)
    {
        num=x;
        denum=y;
    }
    
    int operator >(abh c)
    {
    
        if(num*c.denum>denum*c.num)
        return 1;
        else
        return  0;
    }
};
main()
{
    int i,j,k,l;
    cout<<"enter the numerator\n";
    cin>>i;
    cout<<"enetr the denominator\n";
    cin>>j;
    cout<<"enter the numerator\n";
    cin>>k;
    cout<<"enetr the denominator\n";
    cin>>l;
    abh c1(i,j),c3(k,l);
    if(c1>c3)
    cout<<i<<"/"<<j<<"\n is greater\n";
    else
    cout<<i<<"/"<<j<<"\n is lesser";
}

// enter the numerator
// 1
// enetr the denominator
// 4
// enter the numerator
// 1
// enetr the denominator
// 2
// 1/4
//  is lesser

// enter the numerator
// 1
// enetr the denominator
// 2
// enter the numerator
// 1
// enetr the denominator
// 4
// 1/2
//  is greater