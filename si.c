#include<stdio.h>
int main()
{
    float p,r,t,si;
    printf("Enter the value of p,r,t=");
    scanf("%f%f%f",&p,&r,&t);
    si=(p*r*t)/100;
    printf("si is =%f",si);
    return 0;
}