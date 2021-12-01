#include<bits/stdc++.h>
using namespace std;
//trust the function
//1 2 3 4 5 ......... n-1 n//
int sumtill(int n){
  if(n==0)return 0;
  int sum=sumtill(n-1);
  cout<<sum<<"\n";
  return sum+n;  
}
int main(){
  cout<<sumtill(8);
  return 0;
}