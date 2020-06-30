#include<iostream>
using namespace std;
int main()
 {
     
     int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        
        for(int i=0;i<n;i++)
        cin>>a[i];
        
       int max=a[n-1],j=0;
        
        for(int i=n-2;i>=0;i--)
        {
           if(max<=a[i])
           max=a[i];
           else a[i]=-1;
              
           
        }
       for(int i=0;i<n;i++)
       {
           if(a[i]!=-1)
            cout<<a[i]<<" ";
       }
        //cout<<b[i]<<" ";
       
        cout<<endl;
    }
	//code
	return 0;
}
