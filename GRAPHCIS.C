#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
char ch;
int i;
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

circle(200,200,50);
printf("Enter a character");
ch=fgetc(stdin);
if(ch==13)
{
for(i=1;i<=100;i++)
{
cleardevice();
circle(200+i,200,50);
delay(100);
}
getch();
}
}