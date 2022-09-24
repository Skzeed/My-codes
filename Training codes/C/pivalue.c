int main()
{
int n;
int mf=1;
int i,j;
float pi=0;
printf("\nEnter a number: ");
scanf("%d",&n);
printf("\nTerm  PI value");
for(i=1,j=1;i<=n;i++,j+=2)
	{
	pi=pi+(mf*(4.0/j));
	mf=mf*(-1);
	printf("\n%4d  %8.2f",i,pi);
	}
}

