#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,a[4],*p;
    p=(int*)malloc(4*sizeof(int));
    printf("enter the val");
    scanf("%d",&n);
    printf("%d",a);
    printf("\n%d",&a[0]);
    printf("%d",p);
    printf("\n%d",&p[0]);
    
    return 0;
}