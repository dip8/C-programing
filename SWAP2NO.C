/*Write a program in c to sswap 2 numbers*/
#include<stdio.h>
int main(){
double first,second,temp;
printf("Enter First number");
scanf("%lf",&first);
printf("Enter Second number");
scanf("%lf",&second);
//values of first is assigned to temp
temp=first;
//value of second is assigned to first
first=second;
//values of temp(initial values of first)is assined to second
second=temp;
printf("\n Affter swapping,First number =%2lf\n",first);
printf("\nAfter Swapping ,Second number=%2lf",second);
return 0;
}