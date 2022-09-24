#include<iostream>
using namespace std;
int main()
{
int a[5];
int i,sum=0;
cout<<"\nEnter 5 numbers: ";
for(i=0;i<5;i++)
	{
	cin>>a[i];
	sum=sum+a[i];
	}
cout<<"\nThe sum is: "<<sum;
}

