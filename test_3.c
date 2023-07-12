#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	int a[20],i;
	for(i=0;i<20;i++)
{
	printf("enter %d elements");
	scanf("%d",&a[i]);
	}
	printf("array valude is\n");
	for(i=0;i<20;i++);
	{
	printf("a[%d]=%d\n",i,a[i]);
	}
getch();
}
