#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("enter the value of a and b:");
    scanf("%d%d",&a,&b);
    printf("value of a and b before swapping are %d and %d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("value of a and b afte swapping are %d and %d",a,b);
    
}
