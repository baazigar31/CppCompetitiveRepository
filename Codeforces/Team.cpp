// Problem Link - https://codeforces.com/problemset/problem/231/A
/* By Shubham Anand */ 
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

	int n;
	cin>>n;
	int ans=0;
	while(n--){
		vector<int> v(3,0);
		for(int i=0;i<3;i++){
			cin>>v[i];
		}
		
		if(count(v.begin(),v.end(),1)>=2){
			ans++;
		}
	}
	cout<<ans<<endl;
	
	return 0;
}