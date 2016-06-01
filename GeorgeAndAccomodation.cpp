#include<iostream>
#include<map>
#include<algorithm>
#include<string>


#define mp make_pair



using namespace std;


int main()
{
	int n,a,b,k=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		if((b-a) >=2)
			k++;
	}
	cout<<k<<endl;
	
	
	return 0;
}