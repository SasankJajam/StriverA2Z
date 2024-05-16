#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<2*n;i++)
	{
		if(i>=n)
		{
			for(int j=0;j<n-(i-n+1);j++)
			{
				cout<<"*";
			}
			cout<<endl;
		}
		else{
			
		for(int j=0;j<i+1;j++)
		{
			cout<<"*";	
		}
		cout<<endl;
		}
	}
	
}
