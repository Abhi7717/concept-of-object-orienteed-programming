#include<iostream>
using namespace std;

template <class V>
class Vector
{
    protected:
    int size; 
    V *vec;

    public:

    void Create()
    {
        cout<<"\nEnter Vector Size: ";
        cin>>size;

        vec = new V[size];

        cout<<"\nEnter the vector elements: \n";
        for(int i=0; i<size; i++)
        {
            cin>>*(vec+i);
        }
    }

    void Modify()
    {
        V modify;
        int i;

        cout<<"\nWhich value you want to modify: ";
        cin>>modify;

        for(i=0; i<size; i++)
        {
            if(modify==*(vec+i))
            {
                break;
            }
        }

        if((i==size-1)&&(*(vec+i))!=modify)
        {
            cout<<"\nElement not found!";
        }
        else
        {
            cout<<"Enter new value to be entered: ";
            cin>>*(vec+i);
        }

    }

    void s_Multiply()
    {
        int scaler;
        cout<<"\nEnter the scaler you want to multiply with vector: ";
        cin>>scaler;

        for(int i=0; i<size; i++)
        {
            (vec+i)=scaler;
        }
    }

    void Display()
    {
        cout<<"\n(";
        for(int i=0; i<size; i++)
        {
            if(i<size-1)
            {
                cout<<*(vec+i)<<", ";
            }
            else
            {
                cout<<*(vec+i)<<")\n";
            }
        }
    }
};

int main()
{
    Vector<int> V1;
    V1.Create();
    V1.Display();
    V1.Modify();
    V1.Display();
    V1.s_Multiply();
    V1.Display();
}





