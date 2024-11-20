#include<stdio.h>
int main()
{
	int n,i=0,j=0,k=0,c=1;
	printf("enter index of square");
	scanf("%d",&n);
	int a[n][n];
	for(i=0;i<n;i++)
	{for(j=0;j<n;j++)
	a[i][j]=0;}
	i=n/2;j=n-1;
	a[i][j]=1;
	for(c=2;c<n*n;c++)
	{
	i=i-1;
	j=j+1;
	if(i==-1)
	i=n-1;
	if(j==n)
	j=0;
	if(a[i][j]==0)
	a[i][j]=c;
	else
	{
	i+=1;
	j-=2;
	a[i][j]=c;}
	if(i==-1&&j==n)
	{
	i=0;
	j=n-2;
	a[i][j]=c;}}
	
	for(i=0;i<n;i++)
	{{for(j=0;j<n;j++)
	printf("%d  ",a[i][j]);}
	printf("\n");}
	return 0;
	
	
	
}
