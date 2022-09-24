int main()
{
char s[80];
int i;
int v=0, c=0;
printf("\nEnter a sentance: ");
gets(s);
for(i=0;s[i]!='\0';i++)
	{
	if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
		{
			switch(s[i])
			{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				v++;
				break;
			default:
				c++;
			}
		}
	}

printf("\nThere are %d vowels and %d consonants in this sentance",v,c);

}

