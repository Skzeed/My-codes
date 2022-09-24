int main()
	{
	char s[80],c;
	int i;
	int al,nu,ws,ot;
	al=nu=ws=ot=0;
	printf("\nEnter a sentance: ");
	gets(s);
	for(i=0;s[i]!='\0';i++)
		{
		c=s[i];
		if((c>='a' && c<='z') || (c>='A' && c<='Z'))
			al++;
		else if (c>='0' && c<='9')
			nu++;
		else if(c==' ' || c=='\t' || c=='\n')
			ws++;
		else
			ot++;
		}
	printf("\nAlphabets : %d",al);
	printf("\nNumbers   : %d",nu);
	printf("\nWhitespace: %d",ws);
	printf("\nOthers    : %d",ot);
	}

