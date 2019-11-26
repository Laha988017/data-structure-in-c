#include<stdio.h>
void move(int n,char s,char d,char a)
{
	if(n==1)
		printf("\nMove disk %d form %c to %c\n",n,s,d);
	else
	{
	move(n-1,s,a,d);
	move(1,s,d,a);
	move(n-1,a,d,s);
	}
}
void main()
{
	int n;
	char s,a,d;
	printf("Enter the no. of disk");
	scanf("%d",&n);
	move(n,'A','B','C');
}
