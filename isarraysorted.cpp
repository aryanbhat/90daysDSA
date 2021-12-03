#include<bits/stdc++.h>
using namespace std;
int sortedcheck(int arr[],int n){
  if(n==0 || n==1){
    return 1;
  }
  if(arr[0]<arr[1] && sortedcheck(arr+1,n-1)){
    return 1;
  }
  return 0;
}
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<sortedcheck(arr,n);
  return 0;
}