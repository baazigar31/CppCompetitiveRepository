// Problem Link - https://codeforces.com/problemset/problem/112/A
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

	string s1,s2;
	cin>>s1>>s2;
	int n=s1.size();
	int i;
	for( i=0;i<n;i++){
		if(tolower(s1[i])<tolower(s2[i])){
			cout<<-1;
			break;
		}
		if(tolower(s1[i])>tolower(s2[i])){
			cout<<1;
			break;
		}
	}
	if(i==n){
		cout<<0;
	}
	
	return 0;
}