#include<iostream>
using namespace std;
#include<math.h>

// float find_distance(int x,int y)
// {
//     int d=sqrt(((x-0)*(x-0))+((y-0)*(y-0)));
//     return d;
// }
float find_distance(int x,int y, int z=0)
{
 int d=sqrt(((x-0)*(x-0))+((y-0)*(y-0))+((z-0)*(z-0)));
    return d;
}
int main()
{
    int a,b,c,d,d1;
    cout<<"enter the distance a,b,c distance\n";
    cin>>a>>b>>c;
    d=find_distance(a,b); 
    cout<<"distance of 2 cordinate points ="<<d<<"\n";
    d1=find_distance(a,b,c); 
    cout<<"distance of 3 cordinate points ="<<d1; 

    return 0;
}

// enter the distance a,b,c distance
// 3
// 4
// 5
// distance of 2 cordinate points =5
// distance of 3 cordinate points =7