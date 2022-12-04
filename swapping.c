#include<stdio.h>

void main()
{
    int a,b,temp;
    printf("Swapping of two numbers:-\n");
    scanf("%d%d",&a,&b);
    printf("Numbers before swaping %d and %d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("Numbers after swaping %d and %d",a,b);
    
}
