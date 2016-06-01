#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int n,c=0;
	cin>>n;
	string s;
	cin>>s;
	for(int i=1;i<s.length();i++)
	{
		if(s[i]==s[i-1])
		{
			c++;
			s.replace(s.begin()+i,s.end(),s.begin()+i+1,s.end());
			i--;
		}
	}
	cout<<c<<endl;
	return 0;
}
