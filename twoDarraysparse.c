#include<stdio.h>
struct Sparse{
	int row;
	int col;
	int value;
};
typedef struct Sparse spr;
void main()
{
        int a[100][100];
        int i,j,n,m,k=0,c=0,lim;
	spr arr[100];
        printf("Enter the array size (first array) (m x n): ");
        scanf("%d %d",&m,&n);
	lim = m*n/2;
        for(i=0;i<m;i++)
        {
                for(j=0;j<n;j++)
                {
                        //printf("\na[%d][%d]\n",i,j);
                        scanf("%d",&a[i][j]);
			if(a[i][j] == 0)
				c++;
                }
        }

	if(lim<c)
	{
		printf("\nIt is a Sparse Matrix\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				if(a[i][j] != 0)
					{
						arr[k].row=i;
						arr[k].col=j;
						arr[k].value=a[i][j];
						k++;
					}
			}
		}
		printf("\nRow\t Col\t Value\n");
		for(i=0;i<k;i++)
	        	printf("\n%d\t %d\t %d\t",arr[i].row,arr[i].col,arr[i].value);
	}
}
