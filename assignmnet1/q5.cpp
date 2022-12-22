// Write a C++ program to dynamically create two matrixes and perform the matrix addition
// and multiplication.

#include<iostream>
using namespace  std;
int main()
{
    int n,i,j,k;
    cout<<"enter the size\n";
    cin>>n;
    int a[n][n];
    int b[n][n];
    cout<<"enter the elemnets of the array1\n";
    for ( i = 0; i < n ; i++)
    {
        /* code */
        for ( j = 0; j < n; j++)
        {
            /* code */
            cin>>a[i][j];
        }
    }
    cout<<"enter the elemnets of the array2\n";
     for ( i = 0; i < n ; i++)
    {
        /* code */
        for ( j = 0; j < n; j++)
        {
            /* code */
            cin>>b[i][j];
        }
    }   
    int c[n][n];
    cout<<"sum of the matrix :\n";
     for ( i = 0; i < n ; i++)
    {
        /* code */
        for ( j = 0; j < n; j++)
        {
            /* code */
            c[i][j]=a[i][j]+b[i][j];
        }
    }   
     for ( i = 0; i < n ; i++)
    {
        /* code */
        for ( j = 0; j < n; j++)
        {
            /* code */
            cout<<" "<<c[i][j];
        }
        cout<<"\n";
    }   

        int mult[n][n];

    for(i = 0; i < n; ++i)
        for(j = 0; j < n; ++j)
        {
            mult[i][j]=0;
        }

    // Multiplying matrix a and b and storing in array mult.
    for(i = 0; i < n; ++i)
        for(j = 0; j < n; ++j)
            for(k = 0; k < n; ++k)
            {
                mult[i][j] += a[i][k] * b[k][j];
            }

        cout<<"multiplication of the matrix :\n";
            for ( i = 0; i < n ; i++)
    {
        /* code */
        for ( j = 0; j < n; j++)
        {
            /* code */
            cout<<" "<<mult[i][j];
        }
        cout<<"\n";
    }   
    return 0;
}

// enter the size
// 3
// enter the elemnets of the array1
// 1 
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9
// enter the elemnets of the array2
// 10
// 11
// 12
// 13
// 14
// 5
// 16
// 17
// 18
// sum of the matrix :
//  11 13 15
//  17 19 11
//  23 25 27
// multiplication of the matrix :
//  84 90 76
//  201 216 181
//  318 342 286
// PS C:\Users\KIIT\Desktop\c++\3rd sem CPP\oops lab\assignmnet1> 