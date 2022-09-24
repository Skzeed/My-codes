int main()
{
float s;
char n[10];
printf("\nEnter employee name: ");
gets(n);
printf("\nEnter the salary: ");
scanf("%f",&s);
if(s<2500)
	{
	s=s+(s*0.5);
	}
printf("%s's salary is: %f",n,s);

}

