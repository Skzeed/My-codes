int main()
{
char m[][10]={"January","February","March","April", "May"};
int n;
printf("\nEnter the month number(1-5): ");
scanf("%d",&n);
if(n>5)
	printf("\nInvalid Month");
else
	printf("The month %d is: %s",n,m[n-1]);
}

