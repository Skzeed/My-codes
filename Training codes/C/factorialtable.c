int main()
{
int i,j,n,fact;
printf("\nEnter the last number: ");
scanf("%d",&n);
printf("Num   Factorial");
printf("\n-----------------");
for(i=1;i<=n;i++)
	{
	fact=1;
	for(j=1;j<=i;j++)
		{
		fact=fact*j;
		}
	printf("\n%-3d   %-9d",i,fact);
	}
}

