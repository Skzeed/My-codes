int main()
{
int i,n,pro=1;
printf("\nEnter the maximum number: ");
scanf("%d",&n);
for(i=1;i<=n;i+=2)
	{
	pro=pro*i;
	}
printf("\nThe product of odd integers upto %d is: %d",n,pro);
}

