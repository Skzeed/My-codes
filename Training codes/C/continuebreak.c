int main()
{
float r,a;

do{
	printf("\nEnter the radius of the circle (100 to exit): ");
	scanf("%f",&r);
	if(r<=1)
		{
		printf("\nInvalid Input");
		continue;
		}
	if(r==100)
		{
		break;
		}
	a=(22/7.0)*r*r;
	printf("\nThe area of the circle is: %f",a);
	}while(r>=1 || r<100);
}

