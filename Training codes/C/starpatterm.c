int main()
{
int n,i,j,k;
printf("\nEnter a number: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
	{
	printf("\n");
	for(j=1;j<=n-i;j++)
		{
		printf(" ");
		}
	for(k=0;k<i;k++)
		{
		printf("*");
		}
	}
}

