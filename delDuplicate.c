#include<stdio.h>
void main()
{
        int a[100];
        int i,j,n,k;
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
        for(i=0 ;i<n; i++)
	{
		for(j=i+1 ; j<n;)
		{
			if(a[j] == a[i])
			{
				for(k=j;k<n;k++)
					a[k]=a[k+1];
				n--;
			}
			else
				j++;
		}
	}
	printf("Corrct Array\n");
        for( i = 0 ; i<n ;i++)
                printf("%d\t",a[i]);

}

