#include<iostream>
using namespace std;
int fact(int n)
{
    int p,f=1,i;
    if(n>0)
    return n*fact(n-1);
    else
    return 1;
}
int comb(int n,int k)
{
    int f;
    f=fact(n);
    int fa=fact(k);
    int faf=fact(n-k);
    int l=((f)/(fa*faf));
    return l;
}
int main()
{
int i,n,k,f=1;
cout<<"enter the numebr\n";
cin>>n;
cout<<"enter the numebr\n";
cin>>k;
f=comb(n,k);
cout<<"input : "<<n<<" "<<k;
cout<<"comb : "<<f;
return 0;
}


// enter the numebr
// 5
// enter the numebr
// 4
// input : 5 4comb : 5
// PS C:\Users\KIIT\Desktop\c++\3rd sem CPP\oops lab\cse_oops4> 