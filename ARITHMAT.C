/* c-program to a substraction & divison */
#include<stdio.h>
#include<conio.h>
int main(){
int num1,num2;
clrscr();
printf("Enter the first number:");
scanf("%d",&num1);
printf("Enter the second number:");
scanf("%d",&num2);
printf("\nSubstraction of %d-%d",num1,num2);
printf("=%d",(num1-num2));
printf("\nDivision of %d/%d",num1,num2);
printf("=%d",(num1/num2));
getch();
return 0;
}