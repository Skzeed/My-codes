#include<iostream>
using namespace std;
class mycrypt{
private:
	string st;
public:
	string encrypt(string st1)
		{
		string res;
		int i;
		char c;
		for(i=0;i<st1.length();i++)
			{
			c=st1[i];
			c++;
			res.append(1,c);
			}
		return res;
		}
	string decrypt(string st1)
		{
		string res;
		int i;
		char c;
		for(i=0;i<st1.length();i++)
			{
			c=st1[i];
			c--;
			res.append(1,c);
			}
		return res;
		}
};
int main()
{
mycrypt c;
string s,a;
cout<<"\nEnter the string: ";
getline(cin, s);
a=c.encrypt(s);
cout<<"\nEncrypted string: "<<a;
cout<<"\nDecrypted string: "<<c.decrypt(a);
}

