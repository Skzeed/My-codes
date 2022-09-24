char *upper(char *);
int main()
{
char s[100];
printf("\nEnter a string: ");
gets(s);
upper(s);
printf("\nThe adjusted string: %s",s);

}
char *upper(char *str)
{
char *tmp=str;
while(*tmp!='\0')
	{
	if(*tmp>='a' && *tmp<='z')
	*tmp-=32;
	tmp++;
	}
return str;
}

