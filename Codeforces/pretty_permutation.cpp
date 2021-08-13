// Problem Link - https://codeforces.com/contest/1541/problem/A
/* ByShubham Anand */
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
		int n;
		cin>>n;
		vector<int> v(n+1,0);
		for(int i=1;i<=n;i++){
			v[i]=i;
		}
		if(n&1){
			for(int i=1;i<n;i+=2){
				swap(v[i],v[i+1]);
			}
			swap(v[n],v[n-1]);			
		}
		else{
			for(int i=1;i<n;i+=2){
				swap(v[i],v[i+1]);
			}
			
		}
		for(int i=1;i<=n;i++){
			cout<<v[i]<<" ";
		}
		cout<<endl;
	}
	
	
	return 0;
}