
#include<bits/stdc++.h>
using namespace std;
int merge(long long int arr[],long long int temp[],long long int left,long long int mid,long long int right){
	long long int i=left,j=mid,k=left,ans=0;
	while(i<=mid-1&&j<=right){
		if(arr[i]<=arr[j])
		{
			temp[k++]=arr[i++];
			// ans+=(mid-i);
		}
		else{
			temp[k++]=arr[j++];
			ans+=(mid-i);
		}
	}
	while(i<=mid-1){
		temp[k++]=arr[i++];
	}
	while(j<=right){
		temp[k++]=arr[j++];
	}
	for(long long int i=left;i<=right;i++){
		arr[i]=temp[i];
	}
	return ans;
}
int mergersort(long long int arr[],long long int temp[],long long int s,long long int e){
	long long int k=0;
	if(s<e){
		long long int mid=(s+e)/2;
		k+=mergersort(arr,temp,s,mid);
		k+=mergersort(arr,temp,mid+1,e);
		k+=merge(arr,temp,s,mid+1,e);
	}
	return k;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  long long int n;
  cin>>n;
  long long int a[n],b[n],i,j,c=0,arr[n];
  for(i=0;i<n;i++)
  cin>>a[i];
  for(i=0;i<n;i++)
  cin>>b[i];  
  pair<long long int,long long int>p;
  vector<pair<long long int,long long int>>v;
  for(i=0;i<n;i++)
  {
      v.push_back(make_pair(b[i],a[i]));
  }
  sort(v.begin(),v.end());
 for(i=0;i<n;i++)
 {
     arr[i]=v[i].second;
 }
  long long int temp[n];
	cout<<mergersort(arr,temp,0,n-1);
}
