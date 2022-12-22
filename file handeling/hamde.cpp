#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string a="abhijit";
    string b;

    ofstream out("abhi.txt");
    out<<a;
    out.close();

    ifstream in("abhi.txt");
    getline(in,b);
    cout<<b;
    return 0;
}



// friend  inherkitance