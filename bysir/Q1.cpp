//Q1 >> WAP to store details of cars and bikes
#include<iostream>
using namespace std;

class Vehicle
{
	public :
		int milage;
		int price;
		Vehicle(int m,int p)
		{
	  		milage=m;price=p;
		}
};

class Cars :public Vehicle
{
	public :
		int owncost;
		int warnty;
		int scap;
		string fuel;
		Cars(int a,int b,int c,string d,int e,int f):Vehicle(e,f)
		{
			owncost=a; warnty=b;
			scap=c;	fuel=d;
		}
};
class Audi : public Cars 
{
	public:
	string modle;
	Audi(string m,int a,int b,int c,string d,int e,int f):Cars(a,b,c,d,e,f)
	{
		modle=m;
	}
	void show()
	{
		cout<<"\nInformation on Audi Car :\nModle : "<<modle<<"\nOwnership cost : "<<owncost<<"\n";
		cout<<"Seating Capacity : "<<scap<<"\nWarranty : "<<warnty<<"\nFuel Type :"<<fuel<<"\n";
		cout<<"Milage : "<<milage<<"\nPrice : "<<price<<"\n";
	}
};
class Ford : public Cars 
{
	public:
	string modle;
	Ford(string m,int a,int b,int c,string d,int e,int f):Cars(a,b,c,d,e,f)
	{
		modle=m;
	}
		void show()
	{
		cout<<"\nInformation on Ford Car :\nModle : "<<modle<<"\nOwnership cost : "<<owncost<<"\n";
		cout<<"Seating Capacity : "<<scap<<"\nWarranty : "<<warnty<<"\nFuel Type :"<<fuel<<"\n";
		cout<<"Milage : "<<milage<<"\nPrice : "<<price<<"\n";
	}	
};


class Bike : public Vehicle
{
	public:
		int cylin;
		int ngear;
		string cool;
		string wheel;
		int tank;
		Bike(int a,int b,string c,string d,int e,int f,int g):Vehicle(f,g)
		{
			cylin=a;ngear=b;cool=c;wheel=d;tank=e;
		}
};
class Bajaj : public Bike 
{	
	public:
	string type;
	Bajaj(string t,int a,int b,string c,string d,int e,int f,int g):Bike(a,b,c,d,e,f,g)
	{
		type = t;
	}
		void show()
	{
		cout<<"\nInformation on Bajaj Bike :\nMake Type : "<<type<<"\nNo. of Cylinder : "<<cylin<<"\nNo. of Gears  : "<<ngear;
		cout<<"\nCooling Type : "<<cool<<"\nWheel Type : "<<wheel<<"\nFuel Tank Size : "<<tank<<"\n";
		cout<<"Milage : "<<milage<<"\nPrice : "<<price<<"\n";
	}
};
class Tvs : public Bike 
{
	public:
	string type;
	Tvs(string t,int a,int b,string c,string d,int e,int f,int g):Bike(a,b,c,d,e,f,g)
	{
		type=t;
	}
	void show()
	{
		cout<<"\nInformation on TVS Bike:\nMake Type : "<<type<<"\nNo. of Cylinder : "<<cylin<<"\nNo. of Gears  : "<<ngear;
		cout<<"\nCooling Type : "<<cool<<"\nWheel Type : "<<wheel<<"\nFuel Tank Size : "<<tank<<"\n";
		cout<<"Milage : "<<milage<<"\nPrice : "<<price<<"\n";
	}
};


int main()
{
	string mo,ft;int oc,sc,wr,m,p;
	cout<<"\n\nFor Audi\nEnter Modele : ";	cin>>mo;
	cout<<"Enter milage : ";cin>>m;
	cout<<"Enter Prince :";cin>>p;
	cout<<"Enter ownership cost : ";cin>>oc;
	cout<<"Enter seatiing capacity : ";cin>>sc;
	cout<<"Enter fuel type : ";cin>>ft;
	cout<<"Enter warranty : ";cin>>wr;
	Audi A(mo,oc,wr,sc,ft,m,p);
	
	cout<<"\nFor Ford\nEnter modele : ";cin>>mo;
	cout<<"Enter milage : ";cin>>m;
	cout<<"Enter Prince :";cin>>p;
	cout<<"Enter ownership cost : ";cin>>oc;
	cout<<"Enter seating capacity : ";cin>>sc;
	cout<<"Enter fuel type : ";cin>>ft;
	cout<<"Enter warranty : ";cin>>wr;
	Ford F(mo,oc,wr,sc,ft,m,p);
	
	
	string mt,ct,wt; int ts,nc,ng;
	cout<<"\n\nFor Bajaj\nEnter make type : ";cin>> mt;
	cout<<"Enter milage : ";cin>>m;
	cout<<"Enter Prince :";cin>>p;
	cout<<"Enter no of cylinder : ";cin>>nc;
	cout<<"Enter no of gears : ";cin>>ng;
	cout<<"Enter cooling type : ";cin>>ct;
	cout<<"Enter wheel type : ";cin>>wt;
	cout<<"Enter tank size : ";cin>>ts;
	Bajaj B(mt,nc,ng,ct,wt,ts,m,p);
	
	cout<<"\nFor TVS :\nEnter make type : ";cin>>mt;
	cout<<"Enter milage : ";cin>>m;
	cout<<"Enter Prince :";cin>>p;
	cout<<"Enter no of cylinder : ";cin>>nc;
	cout<<"Enter no of gears : ";cin>>ng;
	cout<<"Enter cooling type : ";cin>>ct;
	cout<<"Enter wheel type : ";cin>>wt;
	cout<<"Enter tank size : ";cin>>ts;
	Tvs T(mt,nc,ng,ct,wt,ts,m,p);
	cout<<"\n\n..............................................................................\n\n";
	A.show(); 
	F.show();
	B.show(); 
	T.show();
	
	return 0;
	
}





/*
For Audi
Enter Modele : A8
Enter milage : 10
Enter Prince :12000000
Enter ownership cost : 15000000
Enter seatiing capacity : 4
Enter fuel type : petrol
Enter warranty : 5

For Ford
Enter modele : Mustang
Enter milage : 15
Enter Prince :24000000
Enter ownership cost : 30000000
Enter seating capacity : 4
Enter fuel type : Diesel
Enter warranty : 10


For Bajaj
Enter make type : Pulsar
Enter milage : 50
Enter Prince :1000000
Enter no of cylinder : 2
Enter no of gears : 5
Enter cooling type : hybrid
Enter wheel type : alloy
Enter tank size : 5

For TVS :
Enter make type : Apache
Enter milage : 55
Enter Prince :1500000
Enter no of cylinder : 4
Enter no of gears : 5
Enter cooling type : hybrid
Enter wheel type : alloy
Enter tank size : 5


..............................................................................


Information on Ford Car :
Modle : A8
Ownership cost : 15000000
Seating Capacity : 4
Warranty : 5
Fuel Type :petrol
Milage : 10
Price : 12000000

Information on Ford Car :
Modle : Mustang
Ownership cost : 30000000
Seating Capacity : 4
Warranty : 10
Fuel Type :Diesel
Milage : 15
Price : 24000000

Information on Bajaj Bike :
Make Type : Pulsar
No. of Cylinder : 2
No. of Gears  : 5
Cooling Type : hybrid
Wheel Type : alloy
Fuel Tank Size : 5
Milage : 50
Price : 1000000

Information on TVS Bike:
Make Type : Apache
No. of Cylinder : 4
No. of Gears  : 5
Cooling Type : hybrid
Wheel Type : alloy
Fuel Tank Size : 5
Milage : 55
Price : 1500000

--------------------------------
Process exited after 138.5 seconds with return value 0
Press any key to continue . . .


*/