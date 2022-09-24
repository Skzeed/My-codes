int main()
{
int mark[100];
int n,i,max;
printf("\nHow many students: ");
scanf("%d",&n);
for(i=0;i<n;i++)
	{
	printf("\nEnter student %d mark: ",i+1);
	scanf("%d",&mark[i]);
	if(i==0)
		max=mark[i];
	else
		{
		if(max<mark[i])
			max=mark[i];
		}
		
	}
printf("\nThe highest mark is: %d", max);

}

