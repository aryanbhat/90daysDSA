#include<bits/stdc++.h>
using namespace std;
void pattern_print(int n){
  if(n==0)return;
  
  for(int i=1;i<=n;i++){
    cout<<i<<" ";
  }
  cout<<"\n";
  pattern_print(n-1);
}
int main(){
  pattern_print(5);
  return 0;
}