#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n,k;
         cin>>n>>k;
         int a[n];
         for(int i=0;i<n;i++)
         cin>>a[i];
         for(int i=0;i<n;i=i+k)
         {
            int left=i;
            int right=min(i+k-1,n-1);
            while(left<right)
            swap(a[left++],a[right--]);
               
         }
         for(int i=0;i<n;i++)
         cout<<a[i]<<" ";
         cout<<endl;         
     }
	//code
	return 0;
}
