#include<bits/stdc++.h>
using namespace std;
int sum_digits(int n){
  if(n==0){
    return 0;
  }
  int lastdigit=n%10;
  int remaining=n/10;
  
  return (sum_digits(remaining)+lastdigit);
}
int main(){
  cout<<sum_digits(1242)<<"\n";
}