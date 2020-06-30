#include<iostream>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n,s,j;
         int sum=0,flag=0;
         cin>>n>>s;
         int a[n];
         
         for(int i=0;i<n;i++)
         cin>>a[i];
         for(int i=0;i<n;i++)
         {
          
             for( j=i;j<n;j++)
             {
                 sum =sum+a[j];
                 if(sum>s)
                 {
                     sum=0;// next while k liye isko clear krna bhul gyi thi m
                     break;
                 }
                 if(sum==s)
                 {
                     cout<<i+1<<" "<<j+1<<endl;
                     flag=1;
                     break;
                 }
             }
               if(flag==1)
               break;
                //cout<<"-1"<<endl;
         }
               if(flag==0)
             cout<<"-1"<<endl;
      }
	//code
	return 0;
}
