#include<iostream>
#include<string>
#include<Algorithm>
using namespace std;


int stono(string s)
{
	int a=0;
	char ch;
	for(int i=0;i<s.size();i++)
	{
		ch=s[i];
		a=a*10+(s[i] % 48);
	}
	return a;
}
int main()
{
	int n,a,c=0;
	string s;
	string s1="ABSINTH,BEER, BRANDY, CHAMPAGNE, GIN, RUM, SAKE, TEQUILA, VODKA, WHISKEY, WINE";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		if(isdigit(s[0]))
		{
			a=stono(s);
			if(a < 18)
				c++;
		}
		else
		{
			if(s=="ABSINTH" || s=="BEER" || s=="BRANDY" ||s=="CHAMPAGNE" || s=="GIN" || s=="RUM" || s=="SAKE" || s=="TEQUILA" || s=="VODKA" || s=="WHISKEY" || s=="WINE")
				c++;
		}

	}
	cout<<c<<endl;
	return 0;
}