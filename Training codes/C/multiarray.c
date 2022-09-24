void table(int[][10], int, int);
int main()
{
int i,j,m,n;
int a[100][10];
printf("\nhow many students: ");
scanf("%d",&m);
printf("\nhow many subjects: ");
scanf("%d",&n);
for(i=0;i<m;i++)
	{
	printf("\nStudent %d marks:- ",i+1);
	for(j=0;j<n;j++)
		{
		printf("\nMark %d: ",j+1);
		scanf("%d",&a[i][j]);
		}
	}
table(a,m,n);
}
void table(int a[][10], int m, int n)
{
int i,j,sum;
printf("\n-----Students Mark table------");
printf("\nS.no  ");
for(i=1;i<=n;i++)
	{
	printf("Mark%d  ",i);
	}
printf("Total\n");
for(i=0;i<m;i++)
	{
	sum=0;
	printf("\n%4d  ",i+1);
	for(j=0;j<n;j++)
		{
		printf("%5d  ",a[i][j]);
		sum=sum+a[i][j];
		}
	printf("%5d",sum);
	}

}

