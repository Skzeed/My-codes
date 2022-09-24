int main()
{
char g;
float s;
printf("\nEnter the grade: ");
g=getchar();
printf("\nEnter the salary: ");
scanf("%f",&s);
switch(g)
	{
	case 'A':
		s=s+(s*0.25);
		break;
	case 'B':
		s=s+(s*0.22);
		break;
	case 'C':
		s=s+(s*0.18);
		break;
	default:
		s=s+(s*0.15);
	}
printf("\nThe final salary is: %f",s);
}

