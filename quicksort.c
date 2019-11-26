#include<stdio.h>
int a[100];
int partition(int a[],int p,int r)
{
        int x = a[r];
        int i,j,temp,h;
        i = p-1;
        for(j=p;j<=r-1;j++)
        {
                if(a[j]<=x)
                {       i++;
                        temp = a[i];
                        a[i] = a[j];
                        a[j] = temp;
                }
        }
        temp = a[i+1];
        a[i+1]=a[r];
        a[r] = temp;
	h = i+1;
        return h;
}

void qsort(int a[],int p,int r)
{
	int q;
	if (p<r)
	{
		q = partition(a,p,r);
		qsort(a,p,q-1);
		qsort(a,q+1,r);
	}
}

void main()
{
	int n,i;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	printf("Enter the array\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	qsort(a,0,n-1);
	printf("After sorting: ");
	for(i=0;i<n;i++)
                printf("%d\t",a[i]);

}
