#include<bits/stdc++.h>
using namespace std;
void solve()
{
 int n,d,res=1;
 cin>>n>>d;
 if(d<=10){
    res=pow(2,d);
   cout<<min(res,n)<<endl;
 }
 else if(d>10 && d<=20){
      res=pow(2,10);
      res=res* pow(3,(d-10));
     cout<<min(res,n)<<endl;
 }
 else
 {
     cout<<n<<endl;
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
