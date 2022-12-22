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
    
    abh &operator +=(abh d)
    {
     abh k;
        // c1.num=(num*c.denum)+(c.num*denum);
        // c1.denum=denum*c.denum;
        // return c1;

        num=(num*d.denum)+(denum*d.num);
            denum=denum*d.denum;
        return *this;
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
    c1+=c3;
    cout<<c1.num<<"/"<<c1.denum;
}


// enter the numerator
// 1
// enetr the denominator
// 2
// enter the numerator
// 1
// enetr the denominator
// 2
// 4/4