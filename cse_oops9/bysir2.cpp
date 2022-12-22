//exchannge two variable using function tempelte and class tempelete.
//finding the square of all type of data type .
//shorting  of the array.
// addition of the matrix.(using templete)

#include<iostream>
using namespace std;
template <typename T> void
 sum(T &x ,T &y)
{
    T &t=x;
    x=y;
    y=&t;
    

}

main()
{
    cout<<sum<int>(4,5)<<endl;
    // cout<<sum<char>("a","b")<<endl;
    // cout<<sum<double>(5.8,6.7)<<endl;
}