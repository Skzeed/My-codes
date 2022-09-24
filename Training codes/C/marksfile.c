#include<stdio.h>
int main()
{
FILE *f;
char res;
int m1,m2,m3;
char name[10];
f=fopen("D:\\notes.txt","w");
fprintf(f,"\n****Students marks report****");
fprintf(f,"\nName  Mark1  Mark2  Mark3  Total  Average");
fprintf(f,"\n------------------------------------------");
do{
printf("\nEnter name: ");
gets(name);
printf("\nEnter mark1: ");
scanf("%d",&m1);
printf("\nEnter mark2: ");
scanf("%d",&m2);
printf("\nEnter mark3: ");
scanf("%d",&m3);
fprintf(f,"\n%4s  %5d  %5d  %5d  %5d  %7d",name,m1,m2,m3,m1+m2+m3,(m1+m2+m3)/3);
getchar();
printf("\nDo you want to continue(Y/N): ");
res=getchar();
getchar();
}while(res=='Y' || res=='y');
fclose(f);
}

