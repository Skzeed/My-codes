int main()
{
int n;
int i,j,k,l,m,o;
printf("\nEnter a number: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
	{
	printf("\n");
	for(j=1;j<=n-i;j++)
		{
		printf(" ");
		}
	for(k=i,l=1;l<=i;k++,l++)
		{
		printf("%d",k%10);
		}
	for(m=k-2,o=1;o<i;m--,o++)
		{
		printf("%d",m%10);
		}
	}
}

