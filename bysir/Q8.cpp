#include<iostream>
#include<string.h>
using namespace std;
class String
{
    public:
    string s;
    String(){}
    String(string x)
    {
        s=x;
    }
    
    string operator ==(String c)
    {
    
        if(s.compare(c.s)==0)
        return "true";
        else
        return  "false";
    }
};
main()
{
    string i,j,k,l;
    cout<<"enter the string\n";
    cin>>i;
    cout<<"enetr the string\n";
    cin>>j;
    String c1(i),c3(j);
    l=(c1==c3);
    cout<<l;
}

// o\p

// enter the string
// abhijit
// enetr the string
// abhijit
// true  