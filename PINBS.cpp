#include<bits/stdc++.h>
# define int  long long 
using namespace std;

void solve()
{
  int n;
  string s;
  cin>>s;
  n=s.length();
  int flag=0;
  for(int i=0;i<n-1;i++){
      if(s[i]=='1')
      {
          flag=1;
      }
      
  }
  if(n==1){
      cout<<"No"<<endl;
  }
  else if(flag==0){
      cout<<"No"<<endl;
      
  }
  else{
      cout<<"Yes"<<endl;
  }
   
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
