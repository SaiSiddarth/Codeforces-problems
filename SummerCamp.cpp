#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;



int main()
{
	int k=0;
	int t=10;
	int i,j,p,q,r;
	cin>>j;
	for(i=0;i<383;i++)
	{
		k=i;
		vector<int> n;
		while(k>0)
		{
			n.push_back(k%10);
			k/=10;
		}
		reverse(n.begin(),n.end());
		if(n.size()>=j)
		{
			cout<<n[j-1]<<endl;
			return 0;
		}
		j=j-n.size();
	}

	return 0;
}