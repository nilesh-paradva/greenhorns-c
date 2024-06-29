#include<stdio.h>


int main(){

    //Write C Program to find gross salary

    int a=100,b=10,c=5,d=8,f;

    b = (100*10)/100;
    c = (100*5)/100;
    d = (100*8)/100;

    f=a+b+c+d;

    printf("\n\nBASE SALARY:- %d",a);
    printf("\nHRA:- %d",b);
    printf("\nDA:- %d",c);
    printf("\nTA:- %d",d);

    printf("\n\nGROSS SALARY:- %d\n\n",f);   

    return 0;
}