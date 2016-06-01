#include<iostream>
#include<string>
#include<algorithm>
#include<vector>


using namespace std;

int main()
{
	int flag;
	string s;
	cin>>s;
	if(!isupper(s[0]))
		s[0]=(char)toupper((int)s[0]);
	
	cout<<s<<endl;

	return 0;
}
