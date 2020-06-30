#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         long long int n,m;
         cin>>n>>m;
         long long int a[n],b[m];
         
         for(int i=0;i<n;i++)
         cin>>a[i];
         
         for(unsigned int i=0;i<m;i++)
         cin>>b[i];
         
         int ans = 0; 
         for (unsigned int i = 0; i < n; i++) 
         {
             for (unsigned j = 0; j < m; j++)
             if (pow(a[i], b[j]) > pow(b[j], a[i])) 
              ans++;
         }
    cout<<ans<<endl;
         
         
     }
	//code
	return 0;
}
