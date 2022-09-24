int main()
{
int n,count=1;
int i,p=1,inc;
printf("\nHow many numbers: ");
scanf("%d",&n);
printf("\nS.no  prime.No");
printf("\n-----------------");
while(count<=n)
	{
	inc=0;
	if(p==1)
		{
		printf("\n%4d  %8d",count,p);
		count++;
		}
	else
		{
		for(i=1;i<=p;i++)
			{
			if(p%i==0)
				inc++;
			}
		if(inc==2)
			{
			printf("\n%4d  %8d",count,p);
			count++;
			}	 
		}
	p++;
	}
}

