#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[5]={10,20,30,40,50};
	int prefix_sum[5];
	prefix_sum[0]=arr[0];
	for(int i=1;i<=4;i++)
	{
		prefix_sum[i]=arr[i-1]+arr[i];
	}
	for(int i=0;i<5;i++)
	{
		cout<<prefix_sum[i]<<endl;
	}
}
