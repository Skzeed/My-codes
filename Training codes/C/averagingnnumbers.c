int main()
{
int n,sum=0,avg,t,i;
printf("\nHow many numbers: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
	{
	printf("\nEnter number %d: ",i);
	scanf("%d",&t);
	sum=sum+t;
	}
avg=sum/n;
printf("\nThe sum is: %d\nThe average is: %d",sum,avg);
}

