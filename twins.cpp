#include<iostream>
#include<string>
#include<algorithm>
#include<vector>


using namespace std;

int main()
{
	int c=0;
	int sum=0;
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)
	{
		cin>>c;
		a.push_back(c);
		sum+=c;
	}
	c=0;n=0;
	sort(a.begin(),a.end());
	reverse(a.begin(),a.end());
	for(int i=0;i<a.size();i++)
	{
		c+=a[i];n++;
		if(c>sum-c)
			break;
			
	}
	cout<<n<<endl;
	

	return 0;
}
