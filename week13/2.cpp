#include<iostream>
using namespace std;
int GCD(int a, int b){
  int n,ans=1;
  if(a<b)n=a;
  else n=b;
  for(int i=2;i<=n;i++){
  	if(a%i==0 && b%i==0) ans=i;
  }
  return ans;
}
int main(){
  int a,b;cin>>a>>b;
  cout<<GCD(a,b)<<endl;
  return 0;
}
