#include<iostream>
#include<string>
using namespace std;

class student
{
    public:
    int roll;
    string name;
    
   virtual void getdata()
    {
        // roll=x;
        // name=s;
    }
   virtual void display()
    {
        // cout<<"name of the student  : "<<name<<endl;
        // cout<<"roll  number of the estudent  : "<<roll<<endl;

    }
};

class academic:public student
{
        string branch;
    public:
    void getdata(string h,string k,int z)
    {
        name=k;
        roll=z;
        branch=h;
    }
    void display()
    {
         cout<<"name of the student  : "<<name<<endl;
        cout<<"roll  number of the estudent  : "<<roll<<endl;

        cout<<"branch of the student : "<<branch<<endl;
    }
};

int main()
{
    student *obj;
    academic ob;
    obj=&ob;
    // obj->getdata();
    // obj->display();
    
    // ob=obj;
    obj->getdata("cse","abhijit",44);
    obj->display();
}


// name of the student  : abhijit
// roll  number of the estudent  : 44
// branch of the student : cse