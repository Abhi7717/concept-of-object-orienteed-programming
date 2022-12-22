#include<iostream>
using namespace std;
template<class X>class array
{
    public:
    int i;
    
    X *a=new X[10];
    // }
    void read(X data,int i)
    {
           a[i]=data;
        
    }
    void print()
    {
        for(i=0;i<10;i++)
        {
           cout<<a[i]<<endl;
        }
    }
    void delet(X data)
    {
        for(i=0;i<10;i++)
        {
            if(a[i]==data)
            {
                a[i]=0;
                break;
            }
        }
    }
    void search(X data)
    {
        int flag=0;
        for(i=0;i<10;i++)
        {
            if(a[i]==data){
           flag=1;

            break;}
            
        }
        if(flag==0)
            cout<<"search unsuccessful\n";
            else
            cout<<"search successful\n";
    }
    void shorting()
    {
        int i,j;
        for(i=0;i<10;i++)
        {
            X temp=0;
            for(j=0;j<i-1;j++)
            {
                if(a[j]>a[j+1]){
                X temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                }
            }
        }
    }
};
int main()
{
    array <float>ar;
    float x;
     for(int i=0;i<10;i++)
     {
        cin>>x;
        ar.read(x,i);
     }
     ar.delet(6.5);
     ar.print();
     ar.search(5.5);
     ar.shorting();
     ar.print();

    return 0;
}

// 7.5
// 6.5
// 4.5
// 8.5
// 9.5
// 3.5
// 2.5
// 1.5
// 5.5
// 10.5
// 7.5
// 0
// 4.5
// 8.5
// 9.5
// 3.5
// 2.5
// 1.5
// 5.5
// 10.5
// search successful
// 0
// 3.5
// 4.5
// 2.5
// 7.5
// 1.5
// 8.5
// 5.5
// 9.5
// 10.5