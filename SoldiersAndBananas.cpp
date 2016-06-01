#include<iostream>

using namespace std;

int main()
{
	int k;
	long long int n,w;
	cin>>k>>n>>w;
	w=(w*(k*(w+1)))/2-n;
	if(w>0)
		cout<<w<<endl;
	else 
		cout<<"0"<<endl;
	return 0;
}