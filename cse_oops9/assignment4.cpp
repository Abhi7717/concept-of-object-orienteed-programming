#include<iostream>
#include<string>
using namespace std;
class person
{
    public:
    string name;
    int code;
};
class account:public person
{
    public :
    int pay;
};
class admin:public person
{
    public:
    int experience;
};
class master:public account,public admin
{
    public:
    account l;admin k;
    void update(){
    cout<<"enter the name\n";
    cin>>l.name;
    cout<<"enter the code\n";
    cin>>l.code;
    cout<<"enter the experience in year \n";
    cin>>k.experience;
    cout<<"enter how much he need to pay \n";
    cin>>l.pay;
    }
    void display()
    {
        cout<<"name = "<<l.name<<endl;
        cout<<"code = "<<l.code<<endl;
        cout<<"experience = "<<k.experience<<endl;
        cout<<"pay = "<<l.pay;
    }
};
int main()
{
    master j;
    j.update();
    j.display();
    return 0;

}

//In this program I havent use virtual function becuse maine master class   jo niche walla class hai jisme above 2 class derived hai usko alg alg kr ke access kr re hai..tho problem thodi ayigi...aur simpley maine main me access kr liye master ko tho wo acces ho gaya ..(jysa ki maine bola upper me ki  master calss me above 2 class ka object ko call kr ke access kr llliye hai alg alg.. so not required of virtual  class)

// And remember the virtual class and virtual function are differnt ...in this program we ahve only implmented th virtual class concept..previos problem too..

// waase sir ne ye program issiliye diye the kyu ki humlog virtual class ka use sikhe..but i ahve implemented the vidrtual class in iske pahle wale program.. isme noraml way me kiye ..as sir had'nt told me to do the previos prg. to do with virtual but i have done that woith virtual and this without virtual.

// enter the name
// abhijit 
// enter the code
// 75
// enter the experience in year 
// 9
// enter how much he need to pay 
// 90000
// name = abhijit
// code = 75
// experience = 9
// pay = 90000