#include<stdio.h>
int q[10],front,rear;
int visit[10],a[10][10];
int front=-1;
int rear=-1;

void insert(int a)
{
	if(front==-1 && rear==-1)
	{
		front = rear = 0;
		q[rear]=a;
	}
	else
		q[++rear] = a;
}
int del()
{
	int v;
	if(front == rear)
	{
		v = q[front];
		front = rear = -1;
		return v;
	}
	else
		return q[front++];
}

void bfs(int s,int n)
{
	int p,i;
	insert(s);
	p = del();
	if(p!=0)
	{	printf("%d\t",p);
		visit[p]=1;
	}
	while(p!=0)
	{
		for(i=1;i<=n;i++)
		{
			if((visit[i] == 0) && (a[p][i] !=0))
				insert(i);   visit[i]=1;
		}
		p = del();
		 if (p != 0)	printf("%d\t",p);
		visit[p] = 1;
	}
	for(i=1;i<=n;i++)
		visit[i]=1;
}
void main()
{
	int i,j,n,s;
	printf("\nEnter the Adjacency matrix\n");
	scanf("%d",&n);
	printf("------Adjacency Matrix-------\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			scanf("%d",&a[i][j]);
	}
	printf("\nEnter the starting vertex");
	scanf("%d",&s);
	for(i=1;i<=n;i++)
		visit[i] = 0;
	bfs(s,n);
}
