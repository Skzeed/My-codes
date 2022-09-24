int main()
{
int n, sum;
char r;
do
	{
	system("cls");
	sum=0;
	printf("\nEnter a number: ");
	scanf("%d",&n);
	while(n>0)
		{
		sum=sum+(n%10);
		n=n/10;
		}
	printf("\nThe sum of the digits are: %d",sum);
	getchar();
	printf("\nDo you want to continue(Y/N): ");
	r=getchar();
	}while(r=='Y'||r=='y');
}

