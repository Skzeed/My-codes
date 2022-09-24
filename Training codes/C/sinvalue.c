int main()
{
int x,n,a=1;
int i,j;
float sin=0, fact;
printf("\nEnter X value: ");
scanf("%d",&x);
printf("\nEnter N value: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
	{
	fact=1;
	for(j=1;j<=i;j++)
		{
		fact=fact*j;
		}
	sin=sin+(a*(pow(x,n)/fact));
	a=a*(-1);
	}
printf("\nThe sinx is: %f",sin);
}

