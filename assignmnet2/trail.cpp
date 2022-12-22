#include<iostream>
#include<math.h>
using namespace std;
class binary
{
int number;
public:
    binary()
    {
     
    }
    
    binary(int num)
    {
        number=num;
    }
    // ~binary();
    void add(binary bn,binary b2);
//    int mul(binary bn,binary b2);
};

//  void binary::add(binary bn,binary b2)
// {
//     int i=0, r=0;
//     int bn1=bn.number;
//     int bn2=b2.number;
// 	int sum[20]; 
//   while (bn1 != 0 || bn2 != 0) 
//   {
//    sum[i++] = (int)((bn1 % 10 + bn2 % 10 + r) % 2);
//    r = (int)((bn1 % 10 + bn2 % 10 + r) / 2);
//    bn1 = bn1 / 10;
//    bn2 = bn2 / 10;
//   }
//   if (r != 0) {
//    sum[i++] = r;
//   }
//   --i;
//   cout<<" The sum of two binary numbers is: ";
//   while (i >= 0) {
//    cout<<(sum[i--]);
//   }
//    cout<<("\n");  
// }

// int binary::mul(binary binary1,binary  binary2)
// {
//     int i=0, r=0,sum=0,c=0;
//     int bn1=bn.number;
//     int bn2=b2.number;
//     int k=bn2,p=bn2;
//     while(p!=0)
//     {
//         r=p%10;
//         c++;
//         p=p/10;
//     }
// int t=c;
//     while (k!=0)
//     {
//         cout<<k<<"\n";
//         /* code */
//         int r=k%10;
//          if(r==0)
//          {
//             sum+=1*pow(10,c--);
//             cout<<c<<"\n";
//          }
//          else
//          {
//             sum+=0*pow(10,c--);
//             // cout<<sum<<"\n";
//          }
//          k=k/10;
//     }
//     sum=sum/10;
//     int f=sum;
//     int e=0;
//     while(f!=0)
//     {
//         r=f%10;
//         e+=r*pow(10,t--);
//         f=f/10;
//     }
    
// // 	int sum[20]; 
// //   while (bn1 != 0 || bn2 != 0) 
// //   {
// //    sum[i++] = (int)((bn1 % 10 + bn2 % 10 + r) % 2);
// //    r = (int)((bn1 % 10 + bn2 % 10 + r) / 2);
// //    bn1 = bn1 / 10;
// //    bn2 = bn2 / 10;
// //   }
// //   if (r != 0) {
// //    sum[i++] = r;
// //   }
// //   --i;
// //   cout<<" The sum of two binary numbers is: ";
// //   while (i >= 0) {
// //    cout<<(sum[i--]);
// //   }
//    cout<<("\n dif = \n")<<sum;
//    cout<<("\n dif = \n")<<e; 
// import java.util.Scanner;
// public class Exercise18 {
//  public static void main(String[] args)
//  {
//   int mul(int binary1, int binary2)
//  {
//   int i = 0, remainder = 0;
//   int[] sum = new int[20];
//   int binary_prod_result = 0;

//   while (binary1 != 0 || binary2 != 0)
//   {
//    sum[i++] = (binary1 % 10 + binary2 % 10 + remainder) % 2;
//    remainder = (binary1 % 10 + binary2 % 10 + remainder) / 2;
//    binary1 = binary1 / 10;
//    binary2 = binary2 / 10;
//   }
//   if (remainder != 0)
//   {
//    sum[i++] = remainder;
//   }
//   --i;
//   while (i >= 0)
//   {
//    binary_prod_result = binary_prod_result * 10 + sum[i--];
//   }
//   return binary_prod_result;
//  }
 
// }
// binary::~binary()
// {
// }

// void binary::add(binary a,binary b)
// {
//    int c=a.number+b.number;
//     printf("addition = %d",c);
// }

// string add(string a, string b){
//    string result = "";
//    int temp = 0;
//    int size_a = a.size() - 1;
//    int size_b = b.size() - 1;
//    while (size_a >= 0 || size_b >= 0 || temp == 1){
//       temp += ((size_a >= 0)? a[size_a] - '0': 0);
//       temp += ((size_b >= 0)? b[size_b] - '0': 0);
//       result = char(temp % 2 + '0') + result;
//       temp /= 2;
//       size_a--; size_b--;
//    }
//    return result;
// }

int main()
{
   int b,b1,n;
    binary b4,b5;
   cout<<"enter the 1st number"<<"\n";
   cin>>b;
   binary b2(b);

   cout<<"enter the 2nd number"<<"\n";
   cin>>b1;
   binary b3(b1);  // copy const.
  // binary b3=b1;
//    b4.add(b2,b3);
       cout<<b<<"\n"<<b1<<endl;
   cout<<b2<<"\n"<<b3;
    //    cout<<b2.number<<"\n"<<b3.number;


//     long  multiply = 0;
//   int digit, factor = 1;
  
//   while (binary2 != 0)
//   {
//    digit = (int)(binary2 % 10);
//    if (digit == 1)
//    {
//     binary1 = binary1 * factor;
//     multiply = b5.mul((int) binary1, (int) multiply);
//    }
//    else
//    {
//     binary1 = binary1 * factor;
//    }
//    binary2 = binary2 / 10;
//    factor = 10;
//   }
//   cout<<"Product of two binary numbers: " << multiply<<"\n";
 
 
    return 0;
}