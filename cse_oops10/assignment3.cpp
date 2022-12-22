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
        cout<<num<<"/"<<denum<<endl;
    }
  rational operator +(rational d)
    {
        rational k,i,j;
        j.denum=denum;i.denum=d.denum;
        if(denum==d.denum){
        k.num=num+d.num;
        k.denum=d.denum;
        }
        else{
            
             k.num=(num*d.denum)+(denum*d.num);
            k.denum=i.denum*j.denum;
        }
    return k;
    }
    rational operator -(rational d)
    {
        rational k,i,j;
        j.denum=denum;i.denum=d.denum;
        if(denum==d.denum){
        k.num=num-d.num;
        k.denum=d.denum;
        }
        else{
            
             k.num=(num*d.denum)-(denum*d.num);
            k.denum=i.denum*j.denum;
        }
    return k;
    }
    rational operator *(rational c)
    {
        rational c1;
        c1.num=num*c.num;
        c1.denum=denum*c.denum;
        return c1;
    }
    rational operator /(rational c)
    {
        rational c1;
        c1.num=num*c.denum;
        c1.denum=denum*c.num;
        return c1;
    }

};

main()
{
    int i,j,k,l;
    cout<<"enter the numerator\n";
    cin>>i;
    cout<<"enter the denominator\n";
    cin>>j;
    cout<<"enter the numerator\n";
    cin>>k;
    cout<<"enter the denominator\n";
    cin>>l;
    rational c1(i,j),c2(k,l),c3;
    c3=c1+c2;
    cout<<"addition ="<<endl;
    c3.display();
    // rational c1(i,j),c2(k,l),c3;
    c3=c1-c2;
    cout<<"substraction ="<<endl;
    c3.display();
    // rational c1(i,j),c2(k,l),c3;
    c3=c1*c2;
    cout<<"multiplication ="<<endl;
    c3.display();
    // rational c1(i,j),c2(k,l),c3;
    c3=c1/c2;
    cout<<"division ="<<endl;
    c3.display();

}

// o\p

// enter the numerator
// 1
// enter the denominator
// 2
// enter the numerator
// 3
// enter the denominator
// 4
// addition =      
// 10/8
// substraction =  
// -2/8
// multiplication =
// 3/8
// division =
// 4/6