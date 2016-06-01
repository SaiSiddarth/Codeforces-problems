#include<iostream>
#include<map>
#include<algorithm>
#include<string>

#define mp make_pair

using namespace std;

int main()
{
	string s;
	cin>>s;int k=0;
	map<char,int> a;
	pair<map<char,int>::iterator,bool> it;
	for(int i=0;i<s.length();i++)
	{
		it=a.insert(pair<char,int>(s[i],k++));
		
		
	}
	if(a.size()%2!=0)
		cout<<"IGNORE HIM!"<<endl;
		
	else
		cout<<"CHAT WITH HER!"<<endl;
		
	return 0;
	
}