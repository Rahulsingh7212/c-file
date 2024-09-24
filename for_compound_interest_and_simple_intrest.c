#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float p,r,t,n,si,ci;
    printf("enter the principal amount,rate of intrest,time,number of time interest is compounded per year:");
    scanf("%f%f%f%f",&p,&r,&t,&n);
    si=(p*r*t)/100;
    ci=p*pow((1+r/n),n*t)-p;
    printf("the value of simple intrest is %f\n",si);
    printf("the value of compound intrest is %f\n",ci);

}