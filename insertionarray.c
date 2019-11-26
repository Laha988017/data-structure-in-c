
#include<stdio.h>
#include "MyLibrary.c"
//void insertion(int *,int,int,int);
//void display(int *,int);
//void deletion(int*,int,int);
void reverse(int *,int);
void main()
{
        int arr[100];
        int n,i,pos,num,ch;
        printf("Enter the no. of Elements you want to insert ");
        scanf("%d",&n);
        for(i=0 ; i<n ; i++)
        {
                scanf("%d",&arr[i]);
        }
        display(arr,n);
	printf("\n \nEnter choice\n 1.Insertion\n 2.Deletion\n 3.Reverse\n");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
		printf("Enter the position where you want to insert the element followed by the no. ");
        	scanf("%d %d",&pos,&num);
		insertion(arr,pos,num,n);
		display(arr,n);
		break;
	case 2:
                printf("Enter the position where you want to delete ");
                scanf("%d",&pos);
                deletion(arr,pos,n);
		n--;
                display(arr,n);
		break;
	case 3:
		reverse(arr,n);
		display(arr,n);
		break;
	}
}

/*	void insertion(int arr[],int pos ,int num,int n)
	{       int i; 
		for(i=n-1 ; i>=pos ; i--)
			arr[i+1] = arr[i];
		 arr[pos]=num;
		 n=n+1;
	}
	void display(int arr[],int n)
	{	int i;
		for(i=0 ; i<n ; i++)
                	printf("%d ",arr[i]);
	}
	void deletion(int arr[],int pos,int n)
	{	int i;
		for(i=pos;i<n;i++)
			arr[i]=arr[i+1];
		n--;
	}*/
	void reverse(int arr[],int n)
	{
		int font=0,tail=n-1,i,j,temp;
		for(i=font,j=tail;i<j;i++,j--)
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}


