#include<iostream>
#include<algorithm>
#include<string>
#include<stack>
#include<map>


using namespace std;

int main()
{
	int t;
	cin>>t;
	map<string,int> m;
	pair<map<string,int>::iterator,bool> ret;
	string s;
	for(int i=0;i<t;i++)
	{
		cin>>s;
		ret=m.insert(pair<string,int>(s,1));
		if(ret.second==0)
		{
			int j=ret.first->second++;
			s+=to_string(j);
			m.insert(pair<string,int>(s,j));
			cout<<s<<endl;
		}
		else
		{
			cout<<"OK"<<endl;
		}
	}
	
	return 0;
}