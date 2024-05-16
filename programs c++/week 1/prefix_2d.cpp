#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[3][2]={{10,20},{30,40},{50,60}};
    int prefix_sum[3][2];
    for(int i=0;i<3;i++)
    {
        prefix_sum[i][0]=arr[i][0];
        for(int j=1;j<2;j++)
        {
            arr[i][j]=prefix_sum[i][0]+arr[i][j];
        }
        
    }    
     for(int i=0;i<3;i++)
     {
         for(int j=0;j<2;j++)
         {
             cout<<arr[i][j]<<" ";
         }
         cout<<endl;
    }
}
