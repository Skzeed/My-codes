int main()
{
int n,i;
float pro=1,t;
printf("\nHow many numbers: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
	{
	printf("\nEnter number %d: ",i);
	scanf("%f",&t);
	pro=pro*t;
	}
printf("\nThe product of the numbers are: %.2f",pro);
}

