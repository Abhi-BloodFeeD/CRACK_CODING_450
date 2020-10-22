#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mod = 1e9+7;
const int mxN = 1e6;
const int N = 2e5;

void reverseArray(int *arr,int start,int end){
  if(start>=end)
  return;
  swap(*(arr+start),*(arr+end));
  return reverseArray(arr,++start,--end);
}

int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n;cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)cin>>arr[i];
  reverseArray(arr,0,n-1);
  for(auto x:arr)cout<<x<<" ";
  cout<<endl;
  
  
  
return 0; 
} 
