#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>

using namespace std;

int main()
{
	int n,l,a;
	cin>>n>>l;
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		v.push_back(a);
	}
	sort(v.begin(),v.end());
	/*for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}*/
	int m=0;
	for(int i=0;i<v.size()-1;i++)
	{
		if(v[i+1]-v[i] > m)
			m=v[i+1]-v[i];
	}
	int t=2*max((v[0]-0),(l-v[n-1]));
//	cout<<"t= "<<t<<endl;
	//cout<<"m= "<<m<<endl;
	if(m > t)
		printf("%.10f\n",m/2.);
	else 
		printf("%.10f\n",t/2.0);

	
	
	return 0;
	
}