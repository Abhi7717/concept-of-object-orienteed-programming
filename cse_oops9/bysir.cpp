#include<iostream>
using namespace std;
template <typename T> T sum(T x ,T y)
{
    return x+y;

}
main()
{
    cout<<sum<int>(4,5)<<endl;
    cout<<sum<char>("a","b")<<endl;
    cout<<sum<double>(5.8,6.7)<<endl;
}