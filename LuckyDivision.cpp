#include<iostream>
#include<string>
#include<algorithm>
#include<vector>


using namespace std;

int main()
{
	int c=0;
	int sum=0;
	vector<int> a;
	a.push_back(4);
	a.push_back(7);
	a.push_back(44);
	a.push_back(47);
	a.push_back(74);
	a.push_back(77);a.push_back(447);a.push_back(477);a.push_back(474);a.push_back(747);a.push_back(744);a.push_back(777);a.push_back(4);
	a.push_back(444);
	a.push_back(774);
	cin>>c;
	sort(a.begin(),a.end());
	for(int i=0;i<a.size();i++)
	{
		if(a[i]>c)
			break;
		if(c%a[i]==0)
		{
			cout<<"YES"<<endl;
			return 0;
		}
	}
	cout<<"NO"<<endl;
	return 0;
}
