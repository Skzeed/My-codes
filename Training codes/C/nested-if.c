int main()
{
char g;
float s;
printf("\nEnter the grade: ");
g=getchar();
printf("\nEnter the salary: ");
scanf("%f",&s);
if(g=='A')
	s=s+(s*0.25);
else if(g=='B')
	s=s+(s*0.22);
else if(g=='C')
	s=s+(s*0.18);
else
	s=s+(s*0.15);
printf("\nThe final salary is: %f",s);
}

