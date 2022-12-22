#include<iostream>
using namespace std;
class rational
{
    public:
    int num,denum;
    rational(){}
    rational(int x,int y)
    {
        num=x;
        denum=y;
    }
    void display()
    {
        cout<<num<<"/"<<denum;
    }
   friend rational operator -(rational);//if not using frnd function the no need to pass the argument.  
    // {
    //     rational l;
    //     l.num=-num;
    //     l.denum=-denum;
    //     return l;
    //  }
};
rational operator -(rational k)
    {
        rational l;
        l.num=-k.num;
        l.denum=-k.denum;
        return l;
     }
main()
{
     int i,j;
    cout<<"enter the numerator\n";
    cin>>i;
    cout<<"enter the denominator\n";
    cin>>j;
    rational k(i,j),l;
    l=-k;
    l.display();
}

// enter the numerator
// 3
// enter the denominator
// 4
// -3/-4


// enter the numerator
// -3
// enter the denominator
// -5
// 3/5