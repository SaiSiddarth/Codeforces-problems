#include<iostream>
#include<map>
#include<algorithm>
#include<string>
#include<bitset>

#define mp make_pair



using namespace std;


int main()
{
	bitset<100000> dp;
	int k,l,m,n,d;
	cin>>k>>l>>m>>n>>d;
	int sum=d;
	if(k==1 || l==1 ||m==1 ||n==1)
	{	cout<<d<<endl;return 0;}
	
	for(int i=0;i<=d;i++)
	{
		if(i%l !=0 && i%m!=0 && i%k!=0 && i%n!=0)
			sum--;
	}
	cout<<sum<<endl;
	
	
	return 0;
}