int minmax(int[], int n, int*);
int main()
{
int a[]={1,2,5,3,5};
int min,max;
min=minmax(a,5,&max);
printf("\nMinimum: %d, Maximum: %d",min,max);
}
int minmax(int a[], int n, int *maximum)
{
int min,max,i;
min=max=a[0];
for(i=1;i<n;i++)
	{
	if(a[i]>max)
		max=a[i];
	if(a[i]<min)
		min=a[i];
	}
*maximum=max;
return min;
}

