#include<string>
#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
	string s;
	string t;
	getline(cin,s);
	getline(cin,t);
	reverse(s.begin(),s.end());
	if(t.compare(s) ==0)
	{cout<<"YES"<<endl;return 0;}
	cout<<"NO"<<endl;
	return 0;
}