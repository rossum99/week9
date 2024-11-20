#include <stdio.h>
int main()
{int n,i,j,k=1,p,q,r;
	printf("enter index of square here");
	scanf("%d",&n);
	int a[n][n];
	for(i=0;i<(n+1)/2;i++)
	{for(j=i;j<=n-j-1;j++)
	a[i][j]=k++;}
	for(p=i;p<n-i-1;p++)
	a[p][n-1-i]=k++;
	for(q=n-2-i;q>=i;q--)
	a[n-2-i][q]=k++;
	for(r=n-2-i;r>i;r--)
	a[r][i]=k++;
	
	for(i=0;i<n;i++)
	{{for(j=0;j<n;j++)
	printf("%d ",a[i][j]);}
	printf("\n");}
	return 0;
}
