// #include<iostream>
// using namespace std;
// class centimeter;
// class meter
// {
// private:
//     /* data */
//     int m;
// public:
//    meter(int v)
// {
//     m=v;
//     cout<<m<<endl;
// }
     
//     //  void getvalue(int x)
//     //  {
//     //     m=x;
//     //  }
//      friend int sum(centimeter);
// };


// class centimeter:public meter
// {
//     int cm;
// public:
//      centimeter(int x,int y):meter(y)
//      {
//         int cm=x;
//         cout<<cm<<endl;
//      }
    
//     //  void getvalue(int z)
//     //  {
//     //     cm=x;
//     //  }
//      friend int sum(centimeter);
//     void display(int);
// };

// int sum(centimeter ob)
// {
//     // cout<<ob.cm;
// return ob.cm+ob.m;
// }
// void centimeter::display(int k)
// {
//     cout<<"sum = "<<k;
// }

// int main()
// {
//     // int n,m;
//     int k;
//     centimeter c1(10,5);
//     // cout<<"enter the number in meter\n";
//     // cin>>m;
//     // cout<<"enter the number in  centimeter\n";
//     // cin>>n;
//     // c1.getvalue(n,m);
//     k=sum(c1);
//     cout<<k<<endl;
//     c1.display(k);
// }
// // 



// // Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std;

// class centimeter;
// class Meter
// {
// private:
//     int meter;

// public:
//     void getValue(int m)
//     {
//         meter=m;
//     }
//     friend int sum(Meter m, centimeter c);
// };

// class centimeter
// {
// private:
//     int c;

// public:
//     void getValue(int m)
//     {
//         c=m;
//     }
//     friend int sum(Meter m, centimeter c);
// };

// int sum(Meter m, centimeter c1)
// {
//     int sum = (m.meter * 100) + c1.c;
//     return sum;
// }
// void display(int sum)
// {
//      cout << "Sum of meter and centimeter: " << sum << "centimeter";
// }
// int main()
// {
//     int z,meter1,centimeter1;
//     Meter D1;
//     centimeter D2;
//     cout << "Enter the value in centimeter: " << endl;
//         cin >> centimeter1;
//         cout << "Enter the value in meter: " << endl;
//         cin >> meter1;
//     D1.getValue(meter1);
//     D2.getValue(centimeter1);
//    z= sum(D1, D2);
//     display(z);
//     return 0;
// }


// // Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std;

// class centimeter;
// class meter
// {
// private:
//     int m;

// public:
//     void getValue(int m)
//     {
//         this->m=m;
//     }
//     friend int sum(meter m, centimeter cm);
// };

// class centimeter
// {
// private:
//     int cm;

// public:
//     void getValue(int cm)
//     {
//         this->cm=cm;
//     }
//     friend int sum(meter m, centimeter cm);
// };

// int sum(meter m1, centimeter cm1)
// {
//     int sum = (m1.m * 100) + cm1.cm;
//     return sum;
// }
// void display(int sum)
// {
//      cout << "Sum of meter and centimeter: " << sum << "centimeter";
// }
// int main()
// {
//     int z,m1,cm1;
//     meter mObj;
//     centimeter cmObj;
//     cout << "Enter the value in centimeter: " << endl;
//         cin >> cm1;
//         cout << "Enter the value in meter: " << endl;
//         cin >> m1;
//     mObj.getValue(m1);
//     cmObj.getValue(cm1);
//     z=sum(mObj, cmObj);
//     display(z);
//     return 0;
// }






#include<iostream>
using namespace std;
class centimeter;
class meter
{
public:
    /* data */
    int m;

   meter(int v)
{
    m=v;
    cout<<m<<endl;
}
     
    //  void getvalue(int x)
    //  {
    //     m=x;
    //  }
    //  int sum(centimeter);
};


class centimeter:public meter
{
    int cm;
public:
     centimeter(int x,int y):meter(y)
     {
        int cm=x;
        cout<<cm<<endl;
     }
    
    //  void getvalue(int z)
    //  {
    //     cm=x;
    //  }
     int sum(){
    cout<<cm<<" "<<m<<endl;
return cm+m;
}
    void display(int);
};

// int sum(centimeter ob)

void centimeter::display(int k)
{
    // cout<<cm<<" "<<m<<endl;
    cout<<"sum = "<<k;
}

int main()
{
    // int n,m;
    int k;
    centimeter c1(10,5);
    // cout<<"enter the number in meter\n";
    // cin>>m;
    // cout<<"enter the number in  centimeter\n";
    // cin>>n;
    // c1.getvalue(n,m);
    k=c1.sum();
    // cout<<k<<endl;
    c1.display(k);
}
// 

