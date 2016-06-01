#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	string s;
	getline(std::cin,s);
	if(s.find("week") != std::string::npos)
	{
		int a=(s[0]) % 7 +1;
		if(a==1 || a==2 || a==3 || a==4 || a==7)
		{
			cout<<"52"<<endl;
		}
		else
		{
			cout<<"53"<<endl;
		}
			
	}
	else
	{
		int a=s[0] % 48;
		if(s[1] != ' ')
		{
			a=a*10;
			a+=s[1] % 48;
		}
		if(a<=29)
			cout<<"12"<<endl;
		else if(a==30)
			cout<<"11"<<endl;
		else
			cout<<"7"<<endl;
	}
	return 0;
}