#include<stdio.h>
#include<string.h>
#include<math.h>
#define MAX 100
int stack[MAX],top=-1;

void push(char);
char pop();
int isoperator(char);
void main()
{
	char postfix[30];
	int len,i,x,y,z;
	printf("Enter the post fix expression");
	scanf("%[^\n]%*c",postfix);
	len=strlen(postfix);
	for(i=0;i<len;i++)
	{
		if(isoperator(postfix[i])!=1)
			push(postfix[i]-'0');
		else
		{
			switch(postfix[i])
			{
				case '+':y=pop();
					 x=pop();
					 z = x+y;
					 push(z);
					 break;
				case '-':y=pop();
                                         x=pop();
                                         z = x-y;
                                         push(z);
                                         break;
				case '*':y=pop();
                                         x=pop();
                                         z = x*y;
                                         push(z);
                                         break;
				case '/':y=pop();
                                         x=pop();
                                         z = x/y;
                                         push(z);
                                         break;
				case '^':y=pop();
                                         x=pop();
                                         z = pow(x,y);
                                         push(z);
                                         break;
				case '%':y=pop();
                                         x=pop();
                                         z = x%y;
                                         push(z);
                                         break;
			}
		}
	}
	printf("\nResult: %d",stack[top]);
}
void push(char a)
{
	if(top == MAX-1)
		printf("Stack Overflow");
	else
		stack[++top]=a;
}
char pop()
{
	if(top == -1)
		return '\0';
	else
	        return stack[top--];
}
int isoperator(char a)
{
	if(a=='+'||a=='-'||a=='*'||a=='/'||a=='^'||a=='%')
		return 1;
        return 0;
}
