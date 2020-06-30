#include <bits/stdc++.h>
using namespace std;

int main()
{
        int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],b[n];
        
        for(int i=0;i<n;i++)
        cin>>a[i];
       
        for(int i=0;i<n;i++)
        cin>>b[i];
        

        
       // for(int i=0;i<n;i++)
        //cin>>b[i];
        sort(a,a+n);
        sort(b,b+n);
        
       // multimap<int,char> m;
       //  for(int i=0;i<n;i++)
      //   {
            // m.insert(make_pair(a[i],'d'));
            // m.insert(make_pair(b[i],'e'));
         //}
        
       /* int result=1,plateform=0;
        //multimap<int,char>::iterator it;
        for(int i=0;i<n;i++)
        {
            if((*it).second=='d')
            plateform++;
            else plateform--;
            
            if(result<=plateform)
                result=plateform;
            
        }*/
        int plat_needed = 1, result = 1; 
   int i = 1, j = 0; 
  
 
   while (i < n && j < n) 
   { 

      if (a[i] <= b[j]) 
      { 
          plat_needed++; 
          i++; 
   
          if (plat_needed > result)  
              result = plat_needed; 
      } 
      else
      { 
          plat_needed--; 
          j++; 
      } 
   } 
      
        cout<<result<<endl;
    }
	//code
	return 0;
}
