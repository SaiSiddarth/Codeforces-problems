#include<iostream>
#include<map>

using namespace std;

int main()
{
	map<int,bool> m;
	pair<map<int,bool>::iterator,bool> r;
	long int a;int c=0;
	for(int i=0;i<4;i++)
	{
		cin>>a;
		r=m.insert(pair<int,bool>(a,0));
		if(r.second==false)
			c++;
	}
	cout<<c<<endl;
	return 0;
}