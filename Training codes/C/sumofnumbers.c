int main()
{
int n,i,sum=0;
printf("\nEnter the maximum number: ");
scanf("%d",&n);
for(i=2;i<n;i=i+3)
	{
	if(i%5==0)
		{
		sum=sum+i;
		}
	}
printf("\nThe sum of numbers are: %d",sum);	   
}

