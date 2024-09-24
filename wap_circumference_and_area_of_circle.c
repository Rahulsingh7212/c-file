#include<stdio.h>
#include<conio.h>
void main()
{
    float r,a,c;
    printf("enter the radius of a circle");
    scanf("%f",&r);
    a=3.14*r*r;
    c=2*3.14*r;
    printf("the area  of circle is %f\n",a);
    printf("the circumference of circle is %f\n",c);

}