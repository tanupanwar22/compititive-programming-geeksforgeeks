#include <bits/stdc++.h>
using namespace std;

void permutation(string a,int l,int r,vector<string> &k)
{
    if(l==r)
    k.push_back(a);
    else
    {
        for(int i=l;i<=r;i++)
        {
           // cout<<a<<" ";
            swap(a[l],a[i]);
            permutation(a,l+1,r,k);
            swap(a[l],a[i]);
        }
    }
    
}
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.size();
        vector<string> v;
        permutation(s,0,n-1,v); 
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();++i)
        cout<<v[i]<<" ";
        cout<<endl;
    }
 //code
 return 0;
}
