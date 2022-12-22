#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
int k=0;
if(num%2==0){
for(i =num-1; i >= (num/2); i--) {
    
        int temp=*(arr+k);
        *(arr+k)=*(arr+i);
        printf("%d ",*(arr+k));
        *(arr+i)=temp;
        k++;
    }
}
else{
    for(i =num-1; i >= (num-1)/2; i--) {
    
        int temp=*(arr+k);
        *(arr+k)=*(arr+i);
        printf("%d ",*(arr+k));
        *(arr+i)=temp;
        k++;
    }
}

    /* Write the logic to reverse the array. */

    for(i = 0; i < num; i++)
        printf("\n%d ", *(arr + i));
    return 0;
}