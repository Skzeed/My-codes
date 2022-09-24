#include<time.h>
int main()
{
int h,t;
int r,i;
h=t=0;
srand(time(0));
for(i=0;i<100;i++)
	{
	r=rand()%2;
	if(r==0)
		h++;
	else
		t++;
	}
printf("\nHeads: %d \nTails: %d",h,t);

}

