int main()
{
int n, min,i,t;
printf("\nEnter how many numbers followed by numbers with space: ");
scanf("%d",&n);
for(i=0;i<n;i++)
	{
	scanf("%d",&t);
	if(i==0)
		min=t;
	else
		{
		if(t<min)
			min=t;
		}
	}
printf("\nThe smallest number is: %d",min);
}

