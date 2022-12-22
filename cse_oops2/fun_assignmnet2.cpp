#include<iostream>
using namespace std;
void find_centigrade(float fahrenheit)
{

float c=(fahrenheit-32)/1.8;
    cout<<"\n temperature : "<<c;
    
}
int main()
{
    float  f,c;
    cout<<"entter the temp. in fahrenheit \n";
    cin>>f;
    find_centigrade(f);
    return 0;

}

// entter the temp. in fahrenheit 
// 32

//  temperature : 0
// PS C:\Users\KIIT\Desktop\c++\3rd sem CPP\oops lab\cse_oop2>