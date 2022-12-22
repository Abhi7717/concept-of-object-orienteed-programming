#include<bits/stdc++.h>
using namespace std;
 class person
 {
    public:
    string name;
    int age;
     void readdata(int x,string y)
    {
        age=x;
        name=y;
    }
    void displaydata()
    {
        cout<<"name = "<<name<<endl;
        cout<<"age  = "<<age<<endl;
    }
 };
 class student:virtual public person
 {
    public:
    int  roll;
    string branch;
    void readdata(int x,string y)
    {
        roll=x;
        branch=y;
    }
    void displaydata()
    {
        cout<<"roll no. ="<<roll<<endl;
        cout<<"branch = "<<branch<<endl;
    }

 };
 class exam:public student
 {
    public:
        int marks1,marks2;
     void readdata(int x,int y)
    {
        marks1=x;
        marks2=y;
    }
     void displaydata()
    {
        cout<<"marks 1 = "<<marks1<<endl;
        cout<<"marks 2 = "<<marks2<<endl;
    }
 };

 class sports:virtual public person{
    
    public:
    int score;
    string game_name;

 void readdata(int x,string y)
    {
        score=x;
        game_name=y;
    }
    void displaydata()
    {
        cout<<"score "<< score<<endl;
        cout<<"game_name = "<<game_name<<endl;
    }
 };

 class result:public exam,public sports{

    public:
    int total;
    void readdata()
    {
        total=marks1+marks2+score;

    }
    void displaydata()
    {
      
        this->person::displaydata();
        this->student::displaydata();
        this->exam::displaydata();
        this->sports::displaydata();
            cout<<"total = "<<total<<endl;
    }
 };

//  int main()
//  {
//     int x,int y;


//     person ob1  
//  }

int main()
{
    result obj;
    obj.person::readdata(18,"abhijit");
     obj.student::readdata(44,"CSE");
     obj.exam::readdata(99,98);
      obj.sports::readdata(44,"cricket");

    obj.readdata();
    obj.displaydata();
    // obj.readdata();
    // obj.readdata();
    return 0;
}