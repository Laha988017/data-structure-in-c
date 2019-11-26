#include<stdio.h>
int q[100],front,rear;
int front=-1;
int rear=-1;
void insert(int q[])
{
	int a;
        printf("Enter the value to be inserted");
        scanf("%d",&a);
	if(rear == 100-1)
		printf("Overflow");
	else if(front==rear && rear==-1)
	{
		front = rear = 0;
		q[rear]=a;
	}
	else
		q[++rear] = a;
}
int del(int q[])
{
	int v;
	if(front == -1 || front>rear)
		printf("Underflow");
	else if(front == rear)
	{
		v = q[front];
		front = rear = -1;
		return v;
	}
	else
		return q[front++];
}
void display(int q[])
{
	int i=front;
	for(;i<=rear;i++)
		printf("%d\t",q[i]);
}
void main()
{
	int ch,v;
	do{
	printf("\n-----------Queue-----------\n");
	printf("1.Insert\n");
	printf("2.Delete\n");
	printf("3.Display\n");
	scanf("%d",&ch);
	switch(ch)
		{
		case 1: insert(q);
			break;
		case 2: v = del(q);
			printf("%d",v);
			break;
		case 3: display(q);
			break;
		case 0: printf("END\n");
			break;
		}
	}while(ch!=0);
}
