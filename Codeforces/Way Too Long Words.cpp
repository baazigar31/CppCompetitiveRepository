// Problem Link - https://codeforces.com/problemset/problem/71/A
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
	
	while(n--){
		string str;
		cin>>str;
		int k=str.size();
		
		if(str.size()<=10){
			cout<<str;
		}else{
			cout<<str[0];
			cout<<k-2;
			cout<<str[k-1];
		}
		cout<<endl;
	}
	
	return 0;
}