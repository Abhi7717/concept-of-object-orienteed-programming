#include<iostream>
using namespace std;
template <class X> class stack
{  
     public:
    int top=-1;
    stack()
    {}
    X *a=new X[10];
    void push(X data)
    {
        if(top==9)
        cout<<"stack is full\n";
        else
        {
            top++;
            a[top]=data;
        }
    }
    void pop()
    {
        printf("pop function called\n");
        if(top==-1)
       cout<<"stack is empty\n";
        else
        {
            a[top]=0;
            top--;
        }
    }
    void display()
    {
        cout<<"display functionn called\n";
        for(int i=0;i<top;i++)
        {
            cout<<a[i]<<"\n";
        }
    }

};
int main()
{
    stack<int> st;
    int n;
    // cin>>f;
    do{
        int d;
        cout<<"enter the data\n";
        cin>>n;
    st.push(n);
    }while(n!=-1);
   

    // stack<float> st1;
    // do{
    //      float d;
    //      int n;
    //     cout<<"enter the data\n";
    //     cin>>n;
    // st1.push(n);
    // }while(n!=-1);
   st.display();
   st.pop();
   st.display();
}

// enter the data
// 6
// enter the data
// 7
// enter the data
// 9
// enter the data
// 8
// enter the data
// 4
// enter the data
// 3
// enter the data
// -1
// display functionn called
// 6
// 7
// 9
// 8
// 4
// 3
// pop function called
// display functionn called
// 6
// 7
// 9
// 8
// 4