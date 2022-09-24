struct stu cal(struct stu);
struct stu{
int mark1, mark2;
int total;
};
int main()
{
struct stu s={10,20};
s=cal(s);
printf("Toaal: %d",s.total);
}
struct stu cal(struct stu s)
{
s.total=s.mark1+s.mark2;
return s;
}

