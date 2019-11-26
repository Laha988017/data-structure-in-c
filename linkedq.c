#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
typedef struct node nd;
nd *front,*rear;


void display(nd*);
void insert();
nd *del();

void main()
{
	int i,ch;
	front = rear = NULL;
	nd *ptr;
	do{
	 printf("\n--------Queue Linked--------\n");
         printf("1.Insert\n");
	 printf("2.Delete\n");
	 printf("3.Display\n");
         printf("0.To Exit\n");
         scanf("%d",&ch);
	 switch(ch)
		{
			case 1:insert();
				break;
			case 3:display(front);
				break;
			case 2:	front = del();
				break;
			default:printf("Enter a correct choice");
		}
		}while(ch!=0);
}
void display(nd* front)
{
	nd *ptr;
	ptr = front;
	printf("\n Linked List: ");
	while(ptr!=NULL){
		printf("%d\t",ptr->data);
		ptr = ptr->next;
	}
}

nd *del()
{
	if(front > rear || front == NULL)
		printf("Underflow");
	else
	{
                nd *ptr;
		ptr = front;
		front = ptr->next;
		free(ptr);
		ptr=NULL;
		display(front);
	}
		return front;
}
void insert()
{
	nd *ptr,*newnode;
	newnode = (nd *)malloc(sizeof(nd));
		printf("Enter the Values of node ");
		scanf("%d",&newnode->data);
		newnode->next = NULL;
		if(front == NULL)
                	front = rear = newnode;
		else if(front == rear)
		{
			rear = newnode;
			front->next = rear;
		}
		else
		{	ptr = front;
			while(ptr->next != NULL)
				ptr=ptr->next;
			rear = newnode;
			ptr->next = rear;
		}
}
