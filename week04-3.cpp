#include<iostream>
using namespace std;

int max_digit(int n)
{
	int max;
	max=n%10;
	while(n>0){
		if( (n%10)>max)  max=n%10;
		n/=10;
	}
	return max;
}
int main(){
  int n;cin>>n;
  cout<<"["<<max_digit(n)<<"]";
  return 0;
}