void fact(int);
int main(int ac, char *av[])
{
int n,i;
if(ac==1)
	{
	printf("\nEnter the factorial number: ");
	scanf("%d",&n);
	fact(n);
	}
else
	{
	for(i=1;i<ac;i++)
		{
		n=atoi(av[i]);
		fact(n);
		}
	}
}
void fact(int n)
{
int i;
int fact=1;
for(i=1;i<=n;i++)
	{
	fact=fact*i;
	}
printf("\n%d factorial: %d",n,fact);
}

