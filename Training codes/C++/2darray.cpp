#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int max,a[10][20];
int i,j;
cout<<"\nEnter the numbers (3*3): ";
max=0;
for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
		{
		cin>>a[i][j];
		if(max<a[i][j])
			max=a[i][j];
		}
	}
for(i=0;i<3;i++)
	{
	cout<<endl;
	for(j=0;j<3;j++)
		{
		cout<<setw(4)<<a[i][j];
		}
	}
cout<<"\nThe highest numbers is: "<<max;
}

