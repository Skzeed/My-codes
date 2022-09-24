int main()
{
char s[80];
int i;
printf("\nEnter a snetence: ");
gets(s);
printf("\nS.no  Letter  ASCII");
printf("\n--------------------------");
for(i=0;s[i]!='\0';i++)
	{
	printf("\n%4d  %6c  %5d",i+1,s[i],s[i]);
	}
}

