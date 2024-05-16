#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>mpp;
    cout<<"enter values";
//    int x;
//    cin>>x;
   for(int i=0;i<5;i++)
   {
       int x;
       cin>>x;
       mpp[i]=x;
   }
   for(int it:mpp)
   {
       cout<<it<<endl;
   }
// mpp["Harshini"]=68;
// mpp["sasank"]=86;
//cout<<mpp["Harshini"];   
//mpp[0]++;
//cout<<mpp[0];
// for(auto it:mpp)
// {
// 	cout<<it.first;
//     cout<<endl;
// }
}
