// Problem Link - https://codeforces.com/problemset/problem/705/A
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
	if(n==1){
		cout<<"I hate it ";

	}
	else{
		for(int i=1;i<=n;i++){
			if(i==n and n&1){
				cout<<"I hate ";
				break;
			}
			if(i==n and (n&1)==0){
				cout<<"I love ";
				break;
			}
			if(i&1){
				cout<<"I hate that ";
			}else{
				cout<<"I love that ";
			}
		}
		cout<<"it";

	}
	

	
	return 0;
}