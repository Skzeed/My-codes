int main()
{
float p,n,r,i,c;
printf("Enter principal amount: ");
scanf("%f",&p);
printf("\nEnter rate of Interest: ");
scanf("%f",&r);
printf("Ener No.of Years: ");
scanf("%f",&n);
c=p*pow(1+(r/100.0),n);
printf("The compound Interest is: %.2f",c);
}

