#include<stdio.h>
#include<conio.h>

void main()
{
int karray[3][4]={{3,4,5},{6,8,9}};
int k,s;
clrscr();
for(k=0;k<2;k++)
{
for(s=0;s<3;s++)
{
	printf("value[%d][%d]=%d\",k,s,karray[k][s]);
}
  
}

