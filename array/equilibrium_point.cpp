#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int sum =0,ls=0,rs=0,flag=0;
        for(int i=0;i<n;++i)
        cin>>a[i];
        
        int L[n],R[n],sum1 = 0,sum2 = 0;
    for(int i = 0,j=n-1;i<n && j>=0;i++,j--)
    {
        sum1 = sum1+a[i];
        L[i] = sum1;
        sum2 = sum2+a[j];
        R[j] =  sum2;
    }
    for(int i = 0;i<n;i++)
    {
        if(L[i] == R[i])
        {
            cout<<i+1<<endl;
            flag=1;
        }
    }
    if(flag!=1)
    cout<<"-1"<<endl;
    }
	//code
	return 0;
}
