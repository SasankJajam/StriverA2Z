#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	int window_size=4,window_sum=0,max_sum,new_max;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<window_size;i++)
	{
		window_sum+=arr[i];
		max_sum=window_sum;
	}
	for(int i=window_size;i<n;i++)
	{
		window_sum=window_sum+arr[i]-arr[i-window_size];
		new_max=max(window_sum,max_sum);
	}
	cout<<new_max;
}
