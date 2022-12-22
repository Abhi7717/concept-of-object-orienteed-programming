#include<iostream>

using namespace std;
class Books
{
	public:
		string auth;
		string title;
		string pub;
		int price;
		int stock;
		Books()
		{
			auth="";
			title="";
			pub="";
			price=0;
			stock=0;
		}
		
		void getdata();
		int check(string,string);
		
		void display()
		{	
			cout<<"Name : "<<title;
			cout<<"\nAuthor : "<<auth;
			cout<<"\nPublisher : "<<pub;
			cout<<"\nPrice : "<<price;
			cout<<"\nStock status : "<<stock;
			cout<<"\n";
		}
		
};
void Books::getdata()
{
	cout<<"Name : ";cin>>title;
	cout<<"Author : ";cin>>auth;
	cout<<"Publisher : ";cin>>pub;
	cout<<"Price : ";cin>>price;
	cout<<"Stock status : ";cin>>stock;
	cout<<"\n";
 }
  
int Books::check(string st,string sa)
{
	int c;
	if((st==title)&&(sa==Books::auth)&&(Books::stock>0))
		{
			cout<<"Book is present in the inventory.\n";
			display();
			cout<<"Enter no of books to buy :";cin>>c;
			if(stock>=c)
			{
				stock=stock-c;	
				cout<<"\nTotal cost of "<<c<<" books : "<<(c*price)<<"\n";	
			}
			else
			{
				cout<<"Required no of copies are not available\n";
			}		
			return 1;
		}
	else
	{
		return 0;
	}
}


int main()
{
	int n,i;
	string St,Sa;
	cout<<"Enter no of books to enter in inventory:\n";
	cin>>n;
	Books C[n];
	cout<<"Enter all Input in UpperCase\n";
	cout<<"Enter details  of the books :\n";
	for(i=0;i<n;i++)
	{
		C[i].getdata();
	}
	int j;
	cout<<"\nEnter title and Author of book to search:";
	cout<<"\nTitle : ";cin>>St;
	cout<<"Author : ";cin>>Sa;
	for(i=0;i<n;i++)
	{	
		j=C[i].check(St,Sa);
		if(j==1)
		break;
	}
	if(j==0)
	{
		cout<<"Book not in inventory.";
	}
	else
	{
		cout<<"\nStatus of Inventory  after selling\n";
		for(i=0;i<n;i++)
		{
			C[i].display();
			cout<<"\n";
		}
	}
	return 0;
}