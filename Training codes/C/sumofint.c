int main()
{
int n,i=1,sum=0;
printf("Enter a number: ");
scanf("%d",&n);
while(i<=n)
	{
	sum=sum+n;
	n--;
	}
printf("\nThe final sum is: %d",sum);
}

