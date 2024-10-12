#include<stdio.h>
#include<conio.h>
void main()
{
    int num,i=0,sum=0;
    printf("enter the number:");
    scanf("%d",&num);
    while(i<=num)
    {
        sum=sum+i;
        i=i+1;
    }
    printf("sum of number upto %d is %d",num,sum);

}