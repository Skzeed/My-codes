int main()
{
int i,n,sum=0;
printf("\nEnter the maximum number: ");
scanf("%d",&n);
for(i=0;i<=n;i+=2)
	{
	sum=sum+i;
	}
printf("\nThe sum of even integers upto %d is: %d",n,sum);
}

