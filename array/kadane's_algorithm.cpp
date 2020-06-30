#include<iostream>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n,maxc,maxg;
         cin>>n;
         int a[n];
         
         for(int i=0;i<n;i++)
         cin>>a[i];
         
         maxc=maxg=a[0];
         for(int i=1;i<n;i++)// loop started from 1
         {
             maxc=max(a[i],maxc+a[i]);
             maxg=max(maxc,maxg);
         }
         cout<<maxg<<endl;
         
     }
	//code
	return 0;
}
