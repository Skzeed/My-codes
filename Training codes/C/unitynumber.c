int unity(int);
int main()
{
int n;
printf("\nEnter a number: ");
scanf("%d",&n);
if(unity(n)==1)
	printf("\nThe number is unity");
else
	printf("\nThe number is not unity");

}
int unity(int n)
{
int sum,num;
if(n==1)
	return 1;
else
	while(n>9)
		{
		sum=0;
		while(n>0)
			{
			num=n%10;
			sum=sum+num;
			n=n/10;
			}
		n=sum;
		}
	if(n==1)
		return 1;
	else
		return 0;
}

