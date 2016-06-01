#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	string s="abcdefghijklmnopqrstuvwxyz";
	int a[26]={0};
	string s1;
	int n;
	cin>>n;
	cin>>s1;
	transform(s1.begin(),s1.end(),s1.begin(), ::tolower);
	for(int i=0;i<s1.size();i++)
	{
		int o=s.find(s[i]);
		a[o]++;
	}
	for(int i=0;i<26;i++)
	{
		if(a[i] == 0)
		{
			cout<<"NO"<<endl;return 0;
		}
	}
	cout<<"YES"<<endl;
	return 0;


}