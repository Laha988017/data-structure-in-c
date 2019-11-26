#include<stdio.h>
void main()
{
	int a[100];
	int i,j,n,index_l,index_s,l,s;
	printf("Enter the size of the array ");
	scanf("%d",&n);
	for( i = 0 ; i<n ;i++)
	{
		scanf("%d",&a[i]);
	}
	for( i = 0 ; i<n ;i++)
        {
                printf("%d\t",a[i]);
        }
	l=s=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>l)
			{
				l= a[i];
				index_l = i;
			}
		else
			{
				s=a[i];
				index_s = i;
			}
	}
	printf("\nLargest Element : %d at position %d",l,index_l);
        printf("\nSmallest Element : %d at position %d",s,index_s);
	printf("\n");
}

