#include<bits/stdc++.h>
# define int  long long 
using namespace std;

void solve()
{
  int t1,t2,r1,r2;
  cin>>t1>>t2>>r1>>r2;
  float f1=(t1*t1) *1.0/(r1*r1*r1)* 1.0;
  float f2=(t2*t2)* 1.0/(r2*r2*r2)* 1.0;
//   cout<<"f1:"<<f1<<"f2:"<<f2;
  if(f1==f2)
  cout<<"Yes"<<endl;
  else
  cout<<"No"<<endl;
   
}
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
     solve();
	}
	return 0;
}
