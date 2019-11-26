#include<stdio.h>
void main()
{
	int a[100][100];
	int i,j,n,m;
	printf("Enter the array size (m x n): ");
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nRow Major\n");
        for(i=0;i<m;i++)
        {
                for(j=0;j<n;j++)
                {
                        printf("%d\t",a[i][j]);
                }
		printf("\n");
        }
	printf("\nColumn Major\n");
        for(i=0;i<m;i++)
        {
                for(j=0;j<n;j++)
                {
                        printf("%d\t",a[j][i]);
                }
		printf("\n");
        }
}
