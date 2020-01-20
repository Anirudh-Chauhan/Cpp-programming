#include <iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
char string[80],c;
cout<<"Enter string(max 79 char):";
cin.getline(string,80);
for(int len=0; string[len]!='\0';++len);
int i,j,flag=1;
for( i=0;j=len-1;i<(len)/2;++i;--j)
{
 if(string[i]!=string[j])
 {
 flag=0;
 break;
 }
}
 if(flag!=0)
 {cout<<"it is";
 }else
 {cout<<"not";}
getch();
}