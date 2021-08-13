// Problem Link - 
#include<bits/stdc++.h>
using namespace std;
#define ll 				long long int
#define ld				long double
#define mod             1000000007
#define inf             1e18
#define endl			"\n"
#define pb 				push_back
#define ff 				first
#define ss 				second
#define loop(i,a,b) 	for(int i=(a);i<=(b);i++)




int main() {

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
		ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int t;
cin>>t;
while(t--){
	ll m,n;
	cin>>m>>n;
	if(m==n){
		cout<<"0"<<" "<<"0"<<endl;
	}else{
		ll a=max(m,n);
		ll b=min(n,m);
		ll curr_gcd=__gcd(a,b);
		ll max_achievable_gcd=a-b;
		if(curr_gcd==max_achievable_gcd){
			cout<<curr_gcd<<" "<<"0"<<endl;
		}
		else{
			ll temp=b;
			temp=temp%max_achievable_gcd;
			ll k=max_achievable_gcd-temp;
			if(temp>k){
				cout<<max_achievable_gcd<<" "<<k<<endl;
			}
			else{
				cout<<max_achievable_gcd<<" "<<temp<<endl;
			}
		}


	}
}
	
	
	return 0;
}