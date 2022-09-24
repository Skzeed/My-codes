long fact(int);
int main()
{
printf("\n%ld",fact(5));
}
long fact(int n)
{
if(n==1)
	return 1;
return n*fact(n-1);
}

