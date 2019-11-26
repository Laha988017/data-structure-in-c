#include<stdio.h>
#define MAX  100
void main()
{
	int stack[MAX],i,top,n,a,k,v;
	int ch;
	top=-1;
	printf("Enter the size of Stack : ");
	scanf("%d",&n);
	do
	{
		printf("\n------------------------STACK-----------------------\n");
		printf("1. Push\n");
		printf("2. Pop\n");
		printf("3. Peep\n");
		printf("4. Display\n");
		printf("0. Exit\n");
		printf("Enter choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
					printf("\nEnter the Element to insert in stack\n");
					scanf("%d",&a);
					if(top == n-1)
						printf("\nOverflow\n");
					else
						stack[++top]=a;
					break;
			case 2:		if(top == -1)
						printf("/nUnderflow/n");
					else
					{   v=stack[top];
					    printf("Popped %d",v);
					    top--;
					}
					break;
			case 3:		printf("Peep Element: %d",stack[top]);
					break;
			case 4:         for(k=0 ; k<=top;k++)
						printf("%d\t",stack[k]);
					break;
		}
	}while(ch!=0);
}
