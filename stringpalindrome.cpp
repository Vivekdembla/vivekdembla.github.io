#include<iostream>
using namespace std;
void check(string s,int i,int n)
{
	if(i>=n/2)
	{
		cout<<"true";
	}
	else
	{
		if(s[i]==s[n-1-i])
		{
			i++;
			check(s,i,n);
		}
		else
		{
			cout<<"false";
		}
	}
}
int main()
{
	string s;
	cin>>s;
	int n=s.size();
	check(s,0,n);
}