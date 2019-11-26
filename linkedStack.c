#include<stdio.h>
#include<stdlib.h>
struct stack{
	int data;
	struct stack *next;
};
typedef struct stack nd;
nd *top = NULL;;
void display(nd *);
nd* push(nd *);
nd *pop(nd *);
void peep(nd *);
void main()
{
	int i,ch;
	nd *ptr;
	do{
	 printf("\n---------------------Linked Stack---------------------\n");
	 printf("\n1.Push\n");
         printf("2.Pop\n");
	 printf("3.Peep\n");
	 printf("4.Display\n");
         printf("0.To Exit\n");
         scanf("%d",&ch);
	 switch(ch)
		{
			case 1:	top = push(top);
				break;
			case 2: if(top ==NULL)
					printf("\nUnderflow\n");
				else
					top=pop(top);
				break;
			case 3:	if(top == NULL)
					printf("No Element in Stack");
				else
					peep(top);
				break;
			case 4:display(top);
				break;
			case 0:printf("\nEND");
				break;
			default:printf("Enter a correct choice");
		}
	}while(ch!=0);
}
void display(nd *top)
{
	nd *ptr;
	ptr = top;
	printf("\n Linked List: ");
	while(ptr!=NULL){
		printf("%d\t",ptr->data);
		ptr = ptr->next;
	}
}
nd *push(nd *top)
{
	        nd *newnode;
        newnode = (nd *)malloc(sizeof(nd));
                printf("Enter the Values of node ");
                scanf("%d",&newnode->data);
                newnode->next = top;
		return newnode;
}
nd *pop(nd *top)
{
                nd *ptr;
		ptr = top;
		top = ptr->next;
		free(ptr);
		ptr=NULL;
		display(top);
		return top;
}
void peep(nd *top)
{
		printf("\nPeep Element: %d",top->data);
}

