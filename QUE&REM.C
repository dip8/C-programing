/* C-Program to compute Quotient and remander */
#include<stdio.h>
#include<conio.h>
int main(){
int divident,divisor,quotient,remainder;
clrscr();
printf("Enter divident:");
scanf("%d",&divident);
printf("Enter Divisor:");
scanf("%d",&divisor);
//computers quotient
quotient=divident / divisor;
//computers remainder
remainder=divident % divisor;
printf("Qutient=%d\n",quotient);
printf("Remainder=%d",remainder);
getch();
}