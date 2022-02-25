#include<stdio.h>
#include<conio.h>
void main()
{	 clrscr();
    char a[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    for(int i=0; i<27; i++)
	printf("%c = %d\t",a[i],a[i]);
    getch();
}