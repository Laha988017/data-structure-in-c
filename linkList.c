#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
typedef struct node nd;
nd *start = NULL;
nd *create(nd *);
void display(nd *);
nd* insert_end(nd *);
nd* insert_beg(nd *);
void insert_givennode(nd *);
nd *del_beg(nd *);
nd *del_end(nd *);
nd *del_pos(nd *);
nd *del_beforepos(nd *);
nd *del_afterpos(nd *);
void main()
{
	int i,ch;
	nd *ptr;
	do{
	 printf("\n1.Create\n");
         printf("2.Display\n");
	 printf("3.Insert at end\n");
	 printf("4.Insert at Begining\n");
	 printf("5.Insert at before a given node\n");
         printf("6.Delete at begining\n");
         printf("7.Delete at end\n");
         printf("8.Delete at a pos\n");
	 printf("9.Delete before a pos\n");
         printf("10.Delete before a pos\n");
         printf("0.To Exit\n");
         scanf("%d",&ch);
	 switch(ch)
		{
			case 1:if(start == NULL)
				start = create(start);
			       else
				{ptr = start;
				while(ptr->next!=NULL)
				{
					ptr = ptr->next;
				}
				ptr->next=create(start);
				}
				break;
			case 2:display(start);
				break;
			case 3:	if(start == NULL)
                                start = create(start);
                               else
                                {ptr = start;
                                while(ptr->next!=NULL)
                                {
                                        ptr = ptr->next;
                                }
                                ptr->next=create(start);
                                }
				break;
			case 4:start=insert_beg(start);
				break;
			case 5:insert_givennode(start);
				break;
			case 6: start = del_beg(start);
				break;
			case 7:start = del_end(start);
                                break;
			case 8:start = del_pos(start);
                                break;
                        case 9:start = del_beforepos(start);
                                break;
                        case 10:start = del_afterpos(start);
                                break;
			case 0:printf("\nEND");
				break;
			default:printf("Enter a correct choice");
		}
		}while(ch!=0);
}
nd *create(nd *start)
{
	nd *ptr,*newnode;
	newnode = (nd *)malloc(sizeof(nd));
		printf("Enter the Values of node ");
		scanf("%d",&newnode->data);
		newnode->next = NULL;
		return(newnode);
}
void display(nd *start)
{
	nd *ptr;
	ptr = start;
	printf("\n Linked List: ");
	while(ptr!=NULL){
		printf("%d\t",ptr->data);
		ptr = ptr->next;
	}
}
nd *insert_end(nd *start)
{
        nd *ptr,*newnode;
        newnode = (nd *)malloc(sizeof(nd));
                printf("Enter the Values of node ");
                scanf("%d",&newnode->data);
                newnode->next = NULL;
		return newnode;
}
nd *insert_beg(nd *start)
{
	        nd *newnode;
        newnode = (nd *)malloc(sizeof(nd));
                printf("Enter the Values of node ");
                scanf("%d",&newnode->data);
                newnode->next = start;
		return newnode;
}
void insert_givennode(nd *start)
{
                nd *ptr=start,*newnode;
		int pos,i=1;
        newnode = (nd *)malloc(sizeof(nd));
		printf("Enter the position");
		scanf("%d",&pos);
                printf("Enter the Values of node ");
                scanf("%d",&newnode->data);
		while(i!=pos){
			ptr = ptr->next;
			i++;
			}
                newnode->next = ptr->next;
                ptr->next=newnode;
		display(start);
}

nd *del_beg(nd *start)
{
                nd *ptr;
		ptr = start;
		start = ptr->next;
		free(ptr);
		ptr=NULL;
		display(start);
		return start;
}

nd *del_end(nd *start)
{
	nd *ptr,*c;
	ptr=start;
	while(ptr->next != NULL){
		c = ptr;
		ptr = ptr->next;
	}
	c->next=NULL;
	free(ptr);
	ptr=NULL;
	display(start);
	return start;
}

nd *del_pos(nd *start)
{
        nd *ptr,*c;
	int i=1,pos;
        ptr=start;
	printf("Enter position to delete ");
	scanf("%d",&pos);
	if(pos == 1){
		start = del_beg(start);
//		break;
		}
	else{
        while(i!=pos){
                c = ptr;
                ptr = ptr->next;
		i++;
        }
        c->next=ptr->next;
        free(ptr);
	ptr=NULL;
        display(start);
        return start;
	}
}
nd *del_beforepos(nd *start)
{
        nd *ptr,*c;
        int i=1,pos;
        ptr=start;
        printf("Enter position to delete before");
        scanf("%d",&pos);
        if(pos == 1){
                start = del_beg(start);
//		break;
		}
	else{
        while(i!=pos-1){
                c = ptr;
                ptr = ptr->next;
                i++;
        }
        c->next=ptr->next;
        free(ptr);
        ptr=NULL;
        display(start);
        return start;
	}
}

nd *del_afterpos(nd *start)
{
        nd *ptr,*c;
        int i=1,pos;
        ptr=start;
        printf("Enter position to delete before");
        scanf("%d",&pos);
        if(pos == 1){
                start = del_beg(start);
//              break;
                }
        else{
        while(i!=pos+1){
                c = ptr;
                ptr = ptr->next;
                i++;
        }
        c->next=ptr->next;
        free(ptr);
        ptr=NULL;
        display(start);
        return start;
        }
}

