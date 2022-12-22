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
    
    abh &operator =(const abh &c)
    {
       num=c.num;
       denum=c.denum;
       return *this;
    }
};
main()
{
    int i,j,k,l;
  
    cout<<"enter the numerator\n";
    cin>>k;
    cout<<"enetr the denominator\n";
    cin>>l;
    abh c1,c3(k,l);
    c1=c3;
    cout<<"\n"<<c1.num<<"/"<<c1.denum;
}


// enter the numerator
// 3
// enetr the denominator
// 4

// 3/4