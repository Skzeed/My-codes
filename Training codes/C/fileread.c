#include<stdio.h>
#include<conio.h>
int main()
{
FILE *f;
int c;
f=fopen("D:\\notes.txt","r");
while((c=getc(f))!=EOF)
	{
	putchar(c);
	}
fclose(f);
}

