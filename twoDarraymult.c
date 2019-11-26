#include<stdio.h>
void main()
{
        int a[100][100],b[100][100],mult[100][100];
        int i,j,n,m,r,c,sum=0,k;
        printf("Enter the array size (first array) (m x n): ");
        scanf("%d %d",&m,&n);
        for(i=0;i<m;i++)
        {
                for(j=0;j<n;j++)
                {
			printf("\na[%d][%d]\n",i,j);
                        scanf("%d",&a[i][j]);
                }
        }
        printf("Enter the array size (second array) (r x c): ");
        scanf("%d %d",&r,&c);

	for(i=0;i<r;i++)
        {
                for(j=0;j<c;j++)
                {
                        printf("\nb[%d][%d]\n",i,j);
                        scanf("%d",&b[i][j]);
                }
        }

        for(i=0;i<m;i++)
        {
                for(j=0;j<n;j++)
                {
                        printf("%d\t",a[i][j]);
                }
                printf("\n");
        }
                printf("\n");
                printf("\n");

        for(i=0;i<r;i++)
        {
                for(j=0;j<c;j++)
                {
                        printf("%d\t",b[i][j]);
                }
                printf("\n");
        }
                printf("\n");
                printf("\n");

	if(n == r)
	{
        	for(i=0;i<m;i++)
        	{
                	for(j=0;j<n;j++)
                	{
                        	for(k=0;k<n;k++)
				{
					sum = sum + a[i][k]*b[k][j];
				}
				mult[i][j]=sum;
				sum=0;
                	}
        	}
	}
	else
		printf("Can't be multiplied");

        for(i=0;i<m;i++)
        {
                for(j=0;j<c;j++)
                {
                        printf("%d\t",mult[i][j]);
                }
                printf("\n");
        }


}

