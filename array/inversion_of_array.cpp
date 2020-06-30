#include<bits/stdc++.h>
using namespace std;
#define ll long
#define disv(v) for(auto c:v){ cout<<c<<" "; } cout<<"\n"

ll merge(ll *v,ll left,ll mid,ll right)
{
    ll inv_cnt=0;
    ll i = left,j = mid;
    ll k=0;
    ll temp[right-left+1];
   
    while(i<=(mid-1) && j<=right)
    {
        if(v[i]<=v[j])
        temp[k++] = v[i++];
        else
        {
            temp[k++] = v[j++];
            inv_cnt += (mid-i);
        }
    }
    
    while(i<=mid-1)
    temp[k++] = v[i++];
    
    while(j<=right)
    temp[k++] = v[j++];
    
    for(ll i=left;i<=right;i++)
    v[i] = temp[i-left];
    
    return inv_cnt;
}

ll ms(ll *v,ll left, ll right)
{
    if(left>right)
        return 0;
    if(left==right)
        return 0;
    
    if(left==right-1)
    {
        if(v[left]<=v[right])
        return 0;
        else swap(v[left],v[right]);
        
        return 1;
    }
    
    ll mid = (left+right)/2;
    ll inv_count = 0;
    inv_count += ms(v,left,mid);
    inv_count += ms(v,mid+1,right);
    inv_count += merge(v,left,mid+1,right);
    return inv_count;
}

ll mergesort(ll *v,ll n)
{
    return ms(v,0,n-1);
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll v[n];
        ll cnt=0;
        for(ll i=0;i<n;i++)
        cin>>v[i];
        
        cnt = mergesort(v,n);
        cout<<cnt<<"\n";
    }
	return 0;
}
