#include<iostream>
#include<string>
using namespace std;
class student
{
    public:
    string name;
    int roll;
    int sec;

};
class test:public student
{
    public:
    int ar[5];
};
int main ()
{
    test l;
    int k;
    cout<<"enter the student\n";
    cin>>l.name;
    cout<<"enter the roll number\n";
    cin>>l.roll;
    cout<<"enter the section \n";
    cin>>l.sec;

    cout<<"enter the marks\n";
    for(int i=0;i<5;i++)
    {
    cin>>k;
    l.ar[i]=k;
    }

    cout<<" name = "<<l.name<<endl;
    cout<<"roll numebr = "<<l.roll<<endl;
    cout<<"section = "<<l.sec<<endl;
    cout<<" marks of the student \n";
    for(int i=0;i<5;i++)
    {
    
    cout<<l.ar[i]<<endl;
    }
    return 0;
}


// enter the student
// abhijit 
// enter the roll number
// 2044
// enter the section 
// 23
// enter the marks
// 90
// 98
// 99
// 97
// 95
//  name = abhijit
// roll numebr = 2044
// section = 23
//  marks of the student
// 90
// 98
// 99
// 97
// 95