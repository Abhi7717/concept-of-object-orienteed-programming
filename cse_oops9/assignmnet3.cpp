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
class test: public student
{
    public:
    int ar[5];

    
};
class sports//:public student // if public student then in student class and sports class i have to use virtual keyword.
{
    public:
    int i;
    void insert()
    {
        cout<<"enter the sports marks\n";
        cin>>i;
    }
};
class result:public test,public sports
{
    public :
    // test k;
    int sum=0,perc=0;
    
    void total(test k,sports t)
    {

        for(int i=0;i<5;i++)
        {
           sum+=k.ar[i];
        }
        sum=sum+t.i;
        perc=sum/6;
        cout<<"total marks = "<<sum<<endl;
        cout<<"percentage = "<<perc<<endl;
    }
};
// class sports:
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
    l.insert();
    
    cout<<" name = "<<l.name<<endl;
    cout<<"roll numebr = "<<l.roll<<endl;
    cout<<"section = "<<l.sec<<endl;
    cout<<" marks of the student \n";
    l.total(l,l);
    
    return 0;
}

// iss program me sports wale class me inherit krne nhi bola th abse class kop lakin fir vi kiye hum so mere isme virtul fucntion us ekrna padha kyu ki... mai main function se result class ko access kr ra tha so compiler confuse ho gaya ki result class ka object use kr ke kon sa class ke though base class ka members ko access kru ...so i have to use virtual class concept to deal with it.

// enter the student
// abhijit
// enter the roll number
// 2044
// enter the section 
// 23
// enter the marks
// 98
// 78
// 89
// 99
// 96
// enter the sports marks
// 99
//  name = abhijit
// roll numebr = 2044
// section = 23
//  marks of the student
// total marks = 559
// percentage = 93