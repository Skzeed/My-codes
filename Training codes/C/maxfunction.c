int max(int, int, int, int);
int main()
{
int m1,m2,m3,m4;
m1=max(4,5,7,3);
m2=max(10,15,17,14);
m3=max(1,2,3,4);
m4=max(5,15,10,20);
printf("\nThe average of maximum number is: %d",(m1+m2+m3+m4)/4);

}
int max(int a, int b, int c, int d)
{
if(a>b && a>c && a>d)
	return a;
else if(b>c && b>d)
	return b;
else if(c>d)
	return c;
else
	return d;
}

