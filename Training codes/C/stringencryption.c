int main()
{
char s[80];
int i;
printf("\nEnter the sentence: ");
gets(s);
for(i=0;s[i]!='\0';i++)
	{
	s[i]-=30;

	}
printf("\nThe encrypted string is: %s",s);
getchar();
}

