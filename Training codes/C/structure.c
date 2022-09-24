struct stu{
char name[80];
int mark1, mark2, total;
float avg;
char elig;
};
int main()
{
struct stu s[5];
int i;
for(i=0;i<5;i++)
	{
	printf("\nStudent %d details:-",i+1);
	printf("\nName: ");
	gets(s[i].name);
	printf("\nMark 1: ");
	scanf("%d",&s[i].mark1);
	printf("\nmark 2: ");
	scanf("%d",&s[i].mark2);
	s[i].total=s[i].mark1+s[i].mark2;
	s[i].avg=s[i].total/2.0;
	if(s[i].avg>80)
		s[i].elig='Y';
	else
		s[i].elig='N';
	getchar();
	}
printf("\nS.No  Name  Mark1  Mark2  Total  Average  Eligibility");
printf("\n------------------------------------------------------");
for(i=0;i<5;i++)
	{
	printf("\n%4d  %4s  %5d  %5d  %5d  %7.2f  %11c",i+1,s[i].name,s[i].mark1,s[i].mark2,s[i].total,s[i].avg,s[i].elig);
	}

}

