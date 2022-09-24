char ucase(char);
int main()
{
char c;
printf("\nEnter a sentance: ");
while((c=getchar())!='\n')
	{
	printf("%c",ucase(c));
	}
}
char ucase(char c)
{
if(c>='a' && c<='z')
	return c-32;
else
	return c;
}

