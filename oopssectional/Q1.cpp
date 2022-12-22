#include<iostream>
using namespace std;
class number
{

public:
    int num;
    number(){}
   number(int x)
{
    num=x;
}


virtual void show()
{

}

};

class rational:public number
{

public:
    int denum;
    rational(){}
  rational(int y,int x):number(x)
{
    denum=y;
}

rational operator+(rational bo)
{
        rational ob;
        ob.num=(num*bo.denum)+(denum*bo.num);
        ob.denum=denum*bo.denum;
        return ob;
}

rational multiply(rational bo)
{
    rational ob;
    ob.num=num*bo.num;
    ob.denum=denum*bo.denum;
    return ob;
}


void show()
{
    cout<<"rational number = ";
    cout<<num<< " / "<<denum;
    cout<<"\n";
}

};


int main()
{
    int x,y,a,b;
    cout<<"enetr the numerator\n";
    cin>>x;
    cout<<"enrter the denominator\n";
    cin>>y;
    cout<<"enetr the numerator\n";
    cin>>a;
    cout<<"enrter the denominator\n";
    cin>>b;
    number ob(x),ob1(a),*ab;
    rational ob2(y,x),ob3(b,a),bo;
    cout<<"addition of rartional number\n";
    bo=ob2.operator+(ob3);
    ab=&bo;
    ab->show();
    cout<<"multiolictaion o frational number\n";
    bo=ob2.multiply(ob3);
    ab=&bo;
    ab->show();

    return 0;
}



// enetr the numerator
// 3
// enrter the denominator
// 4
// enetr the numerator
// 5
// enrter the denominator
// 6
// addition of rartional number
// rational number = 38 / 24   
// multiolictaion o frational number
// rational number = 15 / 24