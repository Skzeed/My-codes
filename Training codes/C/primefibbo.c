int main()
{
int n,inc=0;
int a,b,i,c;
a=b=1;
do{
	printf("\nEnter a positive number(1 to exit): ");
scanf("%d",&n);
if(n==1)
	printf("\nThe number is prime number");
else
	{
	for(i=1;i<=n;i++)
		{
		if(n%i==0)
			inc++;
		}
	if(inc==2)
		printf("\nThe number is prime number");
	else
		printf("\nThe number is not prime number");
	}
if(n==1)
	printf("\nThe number is Fibbonoaci number");
else
	{
	i=1;

	a=1;
	b=1;
	c=a+b;
	while(c<n)
		{
		a=b;
		b=c;
		c=a+b;
		}
	if(c==n)
		printf("\nThe number is fibbonoaci number");
	else
		printf("\nThe number is not fibonnoaci number");
	}

}while(n!=1);
}

