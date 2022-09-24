int prime(int);
int fibo(int);
int main()
{
int n;
printf("\nEnter a number: ");
scanf("%d",&n);
if(prime(n)==1)
	printf("\nThe number is prime");
else
	printf("\nThe number is not prime");
if(fibo(n)==1)
	printf("\nThe number is fibbonoaci");
else
	printf("\nThe number is not fibbonoaci");

}
int prime(int n)
{
int count=0;
int i;
if(n==1)
	return 1;
else
	for(i=1;i<=n;i++)
		{
		if(n%i==0)
			count++;
		}
	if(count==2)
		return 1;
	else
		return 0;
}
int fibo(int n)
{
int a,b,c;
if(n==1)
	return 1;
else
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
		return 1;
	else
		return 0;
}

