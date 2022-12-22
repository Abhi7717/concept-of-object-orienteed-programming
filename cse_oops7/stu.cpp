#include<iostream>
#include<string.h>
using namespace std;
    
class student
{
private:
    /* data */
   string name;
   int roll_no;
   int marks[5];
   public:
//    void getdata(string,int,int*);
void getdata(string st,int ro,int mark[5])
{
    name=st;
    roll_no=ro;
    for(int i=0;i<5;i++)
    marks[i]=mark[i];
}
   float showTotal()
   {
         float sum=0;
        for(int i=0;i<5;i++)
        {
            sum+=marks[i];
        }
        return sum;
   }

};


int main()
{
    string na;
    int rol,j;
    float k;
    int mark[5];
    cout<<"eneter the name\n ";
    cin>>na;
    cout<<"enter the roll number\n";
    cin>>rol;
    cout<<"enter the marks\n";
    for(int i=0;i<5;i++)
    {
        cin>>j;
        mark[i]=j;
    }
    student s;
    s.getdata(na,rol,mark);
    k=s.showTotal();
    cout<<"total is = "<<k;
    return 0;
}


// eneter the name
//  abhij
// enter the roll number
// 457
// enter the marks
// 1
// 2
// 3
// 4
// 5
// total is = 15
// PS C:\Users\KIIT\Desktop\c++\3rd sem CPP\oops lab\cse_oops7> 
