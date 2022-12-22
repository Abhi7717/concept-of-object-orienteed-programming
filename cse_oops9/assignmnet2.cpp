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

class result:public test
{
    public :
    // test k;
    int sum=0,perc=0;
    void total(test k)
    {
        for(int i=0;i<5;i++)
        {
           sum+=k.ar[i];
        }
        perc=sum/5;
        cout<<"total marks = "<<sum<<endl;
        cout<<"percentage = "<<perc<<endl;
    }
};
int main ()
{
    result l;
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
    // for(int i=0;i<5;i++)
    // {
    
    // cout<<l.ar[i]<<endl;
    // }
    l.total(l);

    return 0;
}


// enter the student
// abhijit
// enter the roll number
// 44
// enter the section 
// 23
// enter the marks
// 90
// 98
// 99
// 9
// 97
//  name = abhijit
// roll numebr = 44
// section = 23
//  marks of the student
// total marks = 393
// percentage = 78