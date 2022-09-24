#include<stdio.h>
int main()
{
FILE *f;
char c;
f=fopen("D:\\notes.txt","w");
printf("\nEnter your notes: ");
while((c=getchar())!=EOF)
	{
	putc(c, f);
	}
fclose(f);
}

