#include<stdio.h>
int main()
{
FILE *f;
int m,n,t;
int sum, average, maximum, minimum;
int count=0;
sum=0;
f=fopen("D:\\notes.txt","r");
fscanf(f,"%d",&n);
while(count<n)
	{
	fscanf(f,"%d",&t);
	sum=sum+t;
	if(count==0)
		{
		maximum=t;
		minimum=t;
		}
	else
		{
		if(t>maximum)
			maximum=t;
		if(t<minimum)
			minimum=t;
		}
	count++;
	}
printf("\nsum: %d, max: %d min: %d",sum,maximum,minimum);
fclose(f);
}

