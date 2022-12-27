#include<bits/stdc++.h>
using namespace std;

long long maxArea(long long A[], int len)

{    if(len==1)
     return 0;
    long long ans=0;long long val=0;
    // for(int i=0;i<len-1;i++)
    // {
    //     for(int j=i+1;j<len;j++)
    //     {
    //         ans=max(ans,min(A[i],A[j])*(j-i)); 
    //     }
    // }
    int i=0;int j=len-1;
    while(i<j)
    {
        val=min(A[i],A[j])*(j-i);
        if(A[i]>A[j])
        j--;
        else
        i++;
        ans=max(ans,val);
    }
    return ans;
    
}

int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<maxArea(arr,n)<<endl;
    }
return 0;
}
