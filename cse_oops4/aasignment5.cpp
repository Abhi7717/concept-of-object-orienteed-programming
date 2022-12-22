#include<iostream>
#include<cmath>
using namespace std;
int find_distance(int x,int x1,int y,int y1,int z=0,int z1=0)
{
    int d;
    d=sqrt(((x1-x)*(x1-x))+((y1-y)*(y1-y))+((z1-z)*(z1-z)));
    return d;
}
int main()
{
    int i,j,k,n;
    // cout<<"enter the number\n";
    // cin>>n;
    n=find_distance(1,2,2,4);
    cout<<"distance = "<<n;
    n=find_distance(1,2,3,2,4,6);
    cout<<"distance ="<<n;
    return 0;
}

// distance = 2distance =2
// PS C:\Users\KIIT\Desktop\c++\3rd sem CPP\oops lab\cse_oops4> 