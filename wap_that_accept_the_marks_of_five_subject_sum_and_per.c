#include<stdio.h>
#include<conio.h>
void main()
{
    float m1,m2,m3,m4,m5,sum,per;
    printf("enter the marks of five subjects:");
    scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
    sum=m1+m2+m3+m4+m5;
    per=(sum/200)*100;
    printf("sum of five subject are %f\n",sum);
    printf("percentage of five subject are %f",per);
    
}