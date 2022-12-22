#include<iostream>
using namespace std;

class rational
{
    int num;
    int denum;
    public:
    rational()
    {
        num=0;
        denum=0;

    }

    rational(int  x,int y)
    {
        num=x;
        denum=y;
    }
    rational(rational &h)
    {
        num=h.num;
        denum=h.denum;
    }
    show()
    {
        
        cout<<num<<"/"<<denum<<endl;
    }

    rational add(rational d)
    {
        rational k,i,j;
        j.denum=this->denum;i.denum=d.denum;
        if(this->denum==d.denum){
        k.num=this->num+d.num;
        k.denum=d.denum;
        }
        else{
            
    k.num=(this->num*d.denum)+(this->denum*d.num);
    k.denum=i.denum*j.denum;
        }
    return k;
    }
    int is_Equal(rational d)
    {
        if(num==d.num && denum == d.denum)
        return 1;
        else
        return 0;
    }    
};

int main()
{
    int a,b,c,d;
    cout<<"enter the numerator \n";
    cin>>a;
    cout<<"enter the denominator \n";
    cin>>b;
    cout<<"enter the numerator \n";
    cin>>c;
    cout<<"enter the denominator \n";
    cin>>d;
    rational x(a,b),y(c,d),k;
    cout<<"numbers are"<<endl;
    x.show();

    y.show();

    k=x.add(y);
    cout<<"add\n";
    k.show();
    int l=x.is_Equal(y);
    cout<<"is equal or not \n";
    if(l==1)
    cout<<"\n"<<"equal";
    else
    cout<<"not equal";
    return 0;
}



// enter the numerator 
// 4
// enter the denominator 
// 5
// enter the numerator 
// 6
// enter the denominator 
// 5
// numbers are
// 4/5
// 6/5
// add
// 10/5
// is equal or not
// not equal