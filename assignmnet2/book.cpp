#include<iostream>
#include<string.h>
class book
{
    // author, title, price, publisher and stock position.
    char author[50];
               char title[50];
               char pub[50];
               double price;
               int numcopies;

public:
               stock();
               int access_title(char a[]);
               void input();
               void getdata(int);


};
book::stock()
{
                  char author[50]={"abc"};
                  char title[50]={"efg"};
                  char pub[50]={"hij"};
                  price=500;
                  numcopies=50;
}


int main()
{

    return 0;
}