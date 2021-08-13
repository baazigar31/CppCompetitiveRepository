// Problem Link - https://codeforces.com/contest/339/problem/A
// By Shubham Anand
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


		string str;
		cin>>str;
		int n=str.size();
		int count=0;
		vector<int> v(4,0);
		for(int i=0;i<n;i++){
			if(str[i]=='+'){
				continue;
			}
			v[str[i]-'0']++;
			count++;
		}
		string s;
		for(int i=1;i<=3;i++){
			while(v[i]>0){
				cout<<i;
				v[i]--;
				count--;
				if(count){
					cout<<'+';
				}
			}
		}

	
	
	return 0;
}