int unity(int);
int main()
{
int n;
printf("\nEnter a number: ");
scanf("%d",&n);
if(unity(n))
	printf("\nThe number is unity");
else
	printf("\nThe number is not unity");
}
int unity(int n)
{
int sum=0;
if(n<10)
	return (n==1);
while(n>0)
	{
	sum=sum+n%10;
	n=n/10;
	}
return unity(sum);

}

