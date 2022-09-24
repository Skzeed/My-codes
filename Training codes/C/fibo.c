int main()
{
int n, count=1;
int a,b,c;
printf("\nHow many numbers: ");
scanf("%d",&n);
printf("\nS.no  Fibbo.no");
printf("\n-----------------");
while(count<=n)
	{
	if(count==1)
		{
		a=0;
		b=1;
		printf("\n%4d  %8d",count,b);
		count++;
		}
	else
		{
		c=a+b;
		printf("\n%4d  %8d",count,c);
		a=b;
		b=c;
		count++;
		}
	}
}

