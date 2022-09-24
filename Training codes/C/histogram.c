int main()
{
int n,i,j;
printf("\nEnter 5 numbers continuously seperated by space: ");
for(i=0;i<5;i++)
	{
	scanf("%d",&n);
	printf("\n%3d ",n);
	for(j=0;j<n;j++)
		{
		printf("*");
		}
	}
}

