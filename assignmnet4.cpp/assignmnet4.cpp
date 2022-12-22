#include<iostream>
using namespace std;

 class su
{
// rivate:
public:
    /* data */
    int x;
    su(){}
    su(int a)
    {
        x=a;
    }
    ~su()
    {
    }

};

template <class T> class sum:public su
{
private:
    /* data */
    T y;
public:
sum(){}
    sum(T a,T b):su(a)
{
    y=b;
}

~sum()
{
}

int operator+(int)
{
    sum ob1;
    ob1.y=x+y;
    return ob1.y;
}

};

// class abhi
// {
// private:
//     /* data */
// public:
//     abhi(/* args */)
// {
// }

// ~abhi()
// {
// }

// };

int main()
{
    int a,b,i=0;
    cout<<"enter the numebr\n";
    cin>>a;
    cin>>b;
    sum <int> ob(a,b);
   su ob1;   
   i=ob+i;
   cout<<"sum= "<<i;
    return 0;
}





