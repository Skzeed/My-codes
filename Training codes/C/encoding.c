int main()
{
char s[5];
printf("\nEnter a word to be encoded: ");
gets(s);
s[0]-=30;
s[1]-=30;
s[2]-=30;
s[3]-=30;
s[4]-=30;
printf("\nThe encoded string is: %s",s);
}

