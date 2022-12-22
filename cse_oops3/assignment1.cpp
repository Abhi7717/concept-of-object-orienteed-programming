// #include<iostream>
// using namespace std;
// void swap(int *n,int *m);
// int main()
// {
// int n,m;
// cout<<"enter the two number\n";
// cin>>n>>m;
// swap(&n,&m);
// return 0;
// }
// void swap(int *n,int *m)
// {
// int t;
// t=*n;
// *n=*m;
// *m=t;
// cout<<"n = "<<*n<<"m = "<<*m;
// }


#include<iostream>
using namespace std;
void swap(int &n,int &m);
int main()
{
int n,m;
cout<<"enter the two number\n";
cin>>n>>m;
swap(n,m);
return 0;
}
void swap(int &n,int &m)
{
int t;
t=n;
n=m;
m=t;
cout<<"n = "<<n<<"m = "<<m;
}