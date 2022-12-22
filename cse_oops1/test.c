// Given a string, , consisting of alphabets and digits, find the frequency of each digit in the given string.

// Input Format

// The first line contains a string,  which is the given number.

// Constraints


// All the elements of num are made of english alphabets and digits.

// Output Format

// Print ten space-separated integers in a single line denoting the frequency of each digit from  to .

// Sample Input 0

// a11472o5t6
// Sample Output 0

// 0 2 1 0 1 1 1 1 0 0 
// Explanation 0

// In the given string:

//  occurs two times.
//  and  occur one time each.
// The remaining digits  and  don't occur at all.
// Sample Input 1

// lw4n88j12n1
// Sample Output 1

// 0 2 1 0 1 0 0 0 2 0 
// Sample Input 2

// 1v88886l256338ar0ekk
// Sample Output 2

// 1 1 1 2 0 1 2 0 5 0 



// this code my me 5th case se pura fail kiya hai.

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {

//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
//       char i,s[20];
//       int j,c;
//       gets(s);
//       int l=strlen(s);
//     //   puts(s);
//     for(i='0';i<='9';i++)
//     {
       
//        c=0;       
//         for(j=0;j<l;j++)
//         {
//             if(i==s[j]){
//             c++;
//             // printf("%d ",c);
//             s[j]='-';
//             }
//             // else {
                
//             // }
        
//         }
//         printf("%d ",c);
         
//     }
    
//     return 0;
// }


//original code true one.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int* nums = (int*) malloc(10 * sizeof(int));
    char c;
    
    for(int i = 0; i < 10; i++)
        *(nums+i) = 0;

    while(scanf("%c", &c) == 1)
        if(c >= '0' && c <= '9')
            (*(nums+(c-'0')))++;
    
    for(int i = 0; i < 10; i++)
        printf("%d ", *(nums+i));
    
    return EXIT_SUCCESS;
}
//o/p:
// 8g614eggv7n388564l82nl6f35826hrzd533380b7870n4954497308f03wsx6zyr45025845zz55x7576631425l311cj4n9u29f4xje02l35t31m6me078bx421c24cocx83e438g88d069cc39bn6292033q055kk81m4f82798h7pt031mv530g4v7519h6g78z34p228f9z6067emv47e83uj805q805d572k18h077q6zzo22f35k22631l5j6n8fz0u583xkuu392613478x8823119241o6802910551sm8w9or6v78443c8wt63i3ft21d548p79h14i26k65qhbs79h65su27l1waz62m7l155bib1a2w401b8j7s2i719i68tr60492f685g7lx96i077775kq9436s6s6h81f827624583m894314vjvd41385ww0639e6xs8wzn6362a0029233j99097be0124408o90c861281jgu3168765af270z47e208bclp3845799e4p2710i231h
// Expected Output

// Download
// 32 33 40 40 35 35 39 36 48 29 