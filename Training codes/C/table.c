int main()
{
float b1,b2,b3,d1,d2,d3,n1,n2,n3;
b1=5000;
b2=4500;
b3=3000;
d1=b1*0.2;
d2=b2*0.2;
d3=b3*0.2;
n1=b1+d1;
n2=b2+d2;
n3=b3+d3;

printf("\n             CANADIAN SPACE AGENCY");
printf("\n           Salary list of this month");
printf("\n----------------------------------------------------");
printf("\nS.No  Name     Basic Pay     DA          Net Salary");
printf("\n----------------------------------------------------");
printf("\n%4s %5s     %9.2f     %7.2f     %10.2f","1.","Max",b1,d1,n1);
printf("\n%4s %5s     %9.2f     %7.2f     %10.2f","2.","Jack",b2,d2,n2);
printf("\n%4s %5s     %9.2f     %7.2f     %10.2f","3.","harry",b3,d3,n3);
printf("\n----------------------------------------------------");
printf("\n               %9.2f     %7.2f     %10.2f",b1+b2+b3,d1+d2+d3,n1+n2+n3);
printf("\n----------------------------------------------------");
}

