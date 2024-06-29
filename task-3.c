#include<stdio.h>


int main(){

    //Write C Program to perform a swapping of two variables.

    int a,b,c;

    printf("\n\nEnter number a:- ");
    scanf("%d",&a);

    printf("Enter number b:- ");
    scanf("%d",&b);

    c = a;
    a = b;
    b = c;

    printf("\nNumber a:- %d",a);
    printf("\nNumber b:- %d\n\n",b);

    return 0;
}