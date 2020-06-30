#include<iostream>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n,sum=0,sum1,ans;
         cin>>n;
         int a[n];
         sum1=n*(n+1)/2;
         for(int i=1;i<n;i++)
         {
             cin>>a[i];
             sum+=a[i];
         }
         
         //for(int i=1;i<n;i++)
         //{
          //   if(a[i]!=i)
            // cout<<i;
         //}
         ans=abs(sum1-sum);
         cout<<ans<<endl;
         
     }
	//code
	return 0;
}
