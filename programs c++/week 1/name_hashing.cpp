#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<int,int>mp;
    string s="sasank";
    for(auto it : s)
    {
        mp[it]++;
        //cout<<mp[it];
    }
    for(auto it: mp)
    {
        cout<<it.second<<endl;
    }
}
