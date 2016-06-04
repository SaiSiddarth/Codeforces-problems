#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s="";
	int n,m,t=-1;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		if(i % 2==0)
		{
			for(int j=0;j<m;j++)
			{
				s+='#';
			}
			cout<<s<<endl;
		}
		else
		{
			if(t==-1){
			for(int j=0;j<m-1;j++)
			{
				s+='.';

			}
			s+='#';
			cout<<s<<endl;t*=-1;}
			else
			{
				s+='#';
				for(int j=0;j<m-1;j++)
				{
					s+='.';

				}
				cout<<s<<endl;t*=-1;

			}
		}
		s="";
	}
	return 0;
}