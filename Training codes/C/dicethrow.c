#include<time.h>
int main()
{
int d1, d2, total;
int n,i;
printf("\nHow many throws: ");
scanf("%d",&n);
srand(time(0));
printf("\nThrow  Dice1  Dice2  Total");
printf("\n---------------------------");
for(i=0;i<n;i++)
	{
	d1=rand()%7;
	d2=rand()%7;
	total=d1+d2;
	printf("\n%4d  %5d  %5d  %5d",i+1,d1,d2,total);
	}
}

