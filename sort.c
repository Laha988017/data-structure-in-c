#include<stdio.h>
int a[100];
void isort(int a[],int n)
{
	int i,key,pointer;
	for(i=0;i<n;i++)
	{
		key =a[i];
		pointer = i-1;
		while(key<a[pointer] && pointer>-1)
		{
			a[pointer+1]=a[pointer];
			--pointer;
		}
	a[pointer+1] = key;
	}
}
void display(int a[],int n)
{
	int i;
        printf("After sorting: ");
        for(i=0;i<n;i++)
                printf("%d\t",a[i]);

}

void ssort(int a[],int n)
{
	int i,j,temp,min;
	for(i=0;i<n;++i)
	{
		min = i;
		for(j=i+1;j<n;++j)
		{
			if(a[j]<a[min])
				min = j;
			if(min != i)
			{	temp = a[i];
				a[i]= a[min];
				a[min]=temp;
			}
		}
	}
}

void bsort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;++i)
	{for(j=0;j<n-1-i;++j)
		{
		if(a[j]>a[j+1])
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
		}
	}
}
void main()
{
	int n,i,ch;
	printf("Enter the no elements:\n");
	scanf("%d",&n);
	printf("Enter array\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	do{
	printf("\n1.Insertion\n");
	printf("2.Selection\n");
	printf("3.Bubble\n");
	printf("Enter choice\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:isort(a,n);
			display(a,n);
			break;
		case 2:ssort(a,n);
			display(a,n);
			break;
		case 3:bsort(a,n);
			display(a,n);
			break;
		case 0:printf("THE END");
	}
	}while(ch!=0);
}
