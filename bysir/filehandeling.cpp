#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream out("input.txt");
    out<<"hello";
    out<<"world";
    cout<<"data writen \n";
    out.close();
}

// #include<iostream>
// #include<fstream>
// using namespace std;
// int main()
//  {   
// ifstream fin; // declaring an object of class ifstream
// fin.open("input.txt"); // open " inputFile.dat" for reading   
// cout << "Reading data from a file :-" << endl;   
//     char ch;
// while (!fin.eof()) // while the end of file is not reached
// {            
//     // fin >> ch ;       // read a character from the file without space
//     cout<<ch;
//     ch=fin.get();    //read a characer from the fill with space too
// } 
// fin.close(); // close the file   
// return 0;
// }

// #include<iostream>
// using namespace std;

// int main()

// {
//     double i=0;
//     i=((2/(1-1))==(2/(2-2)));
//     cout<<i;
// }