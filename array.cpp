#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int a,nz=0;
	vector<int> vn;
	vector<int> vp;
	vector<int> vz;
	int np=0;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		if(a< 0)
		{
			vn.push_back(a);
		}
		else if(a==0)
		{
			nz++;
		}
		else
		{
			np++;
			vp.push_back(a);
		}
	}
	if(np == 0)
	{
		int i=0;
		while(i++<2){
		vp.push_back(vn.back());vn.pop_back();
		}
		
	}
	if(vn.size() % 2 ==0)
	{
		vz.push_back(vn.back());vn.pop_back();
	}
	cout<<vn.size();
	for(int i=0;i<vn.size();i++)
	{
		cout<<" "<<vn[i];
	}
	cout<<endl;
	cout<<vp.size();
	for(int i=0;i<vp.size();i++)
	{
		cout<<" "<<vp[i];
	}
	cout<<endl;
	cout<<nz+vz.size();
	for(int i=0;i<nz;i++)
	{
		cout<<" "<<"0";
	}
	for(int i=0;i<vz.size();i++)
	{
		cout<<" "<<vz[i];
	}
	cout<<endl;
	return 0;
	
}