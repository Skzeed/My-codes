int max(int[], int);
int main()
{
int a[]={1,2,3,4,5};
printf("The biggest number is: %d",max(a,5));
}
int max(int a[], int n)
{
int i, max;
for(i=0;i<n;i++)
	{
	if(i==0)
		max=a[0];
	else
		{
		if(max<a[i])
			max=a[i];
		}
	}
return max;
}

