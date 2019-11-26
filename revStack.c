#include<stdio.h>
#include<string.h>
#define MAX 100
int stack[MAX],top=-1;

void push(char);
char pop();

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

void main()
{
	char s[30],v;
	int len,i;
	printf("Enter the string ");
	scanf("%[^\n]%*c",s);
	len=strlen(s);
	for(i=0;i<len;i++)
		push(s[i]);
        for(i=0;i<len;i++)
                {
		printf("%c",pop());
		}

}
