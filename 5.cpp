int max(int a,int b,int c,int d)
{
	int x=a;
	if(x<b) x=b;
	if(x<c) x=c;
	if(x<d) x=d;
	return x;
}

int min(int a,int b,int c,int d)
{
	int x=a;
	if(x>b) x=b;
	if(x>c) x=c;
	if(x>d) x=d;
	return x;
}

int main(){
  int a,b,c,d;cin>>a>>b>>c>>d;
  cout<<(max(a,b,c,d)-min(a,b,c,d));
  return 0;
}