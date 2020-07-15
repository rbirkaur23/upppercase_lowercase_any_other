#include<stdio.h>
#include<conio.h>
void main()
{
char x;
clrscr();
printf("Enter char\n");
scanf("%c",&x);
if(x>='A' && x<='Z')
{
  printf("Upper case");
}
else if(x>='a' && x<='z')
{
  printf("Lower case");
}
else
{
  printf("Other character");
}
getch();
}
