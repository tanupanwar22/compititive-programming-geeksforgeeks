#include<iostream>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         long long int k,n,count=0;
         cin>>n;
         long long int a[n],h[1000001]={0};//fill 0 to remove arbage value 
         for(int i=0;i<n;i++)
         {
             cin>>a[i];
             h[a[i]]=1;
         }
         
         for(int i=0;i<n;i++)
         {
             for(int j=i+1;j<n;j++)
             {
                 k=a[i]+a[j];
                 if(h[k]==1)//hashing use ki
                 count++;
             }
          }   
          if(count!=0)
          cout<<count<<endl;
          else cout<<"-1"<<endl;
         
         
     }
	//code
	return 0;
}
