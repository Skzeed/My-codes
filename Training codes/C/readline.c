#include<stdio.h>
int main()
{
FILE *f;
char c[100];
f=fopen("D:\\notes.txt","r");
while(fgets(c,99,f)!=NULL)
	{
	printf("\n%s",c);
	}
fclose(f);
}

