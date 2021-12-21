#include<stdio.h>
#include<conio.h>
int add(int,int);
void main()
{
  add(8,18);
  getch();
}
int add(int a ,int b)
{
 int c = a+b;
 printf("ADDITION IS :%d",c);
 return (c);
 }