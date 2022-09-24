int main()
{
float s;
char g;
printf("\nEnter the salary: ");
scanf("%f",&s);
getchar();
printf("\nEnter the grade: ");
g=getchar();
if(g=='A' || g=='B' || g=='C')
	{
	s=s+(s*0.25);
	}
else
	{
	s=s+(s*0.15);
	}
printf("The final salary is: %f",s);
}

