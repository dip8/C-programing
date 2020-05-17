/* C-Program to find ASCII value of a charecctor */
# include<stdio.h>
#include<conio.h>
int main(){
char c;
printf("Enter a charector:");
scanf("%c",&c);
// %d display the integer value of charector
// %c display the actual charector
printf("ASCII value of %c =%d\n",c,c);
getch();
}