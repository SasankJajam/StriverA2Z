#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int x=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i+1;j++)
		{
			x++;
			cout<<x;
		}
		x=0;
		cout<<endl;
	}
}
