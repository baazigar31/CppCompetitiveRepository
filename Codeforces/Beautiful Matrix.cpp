// Problem Link - https://codeforces.com/problemset/problem/263/A
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

		vector<vector<int> > v(5,vector<int> (5,0));
		int x=0,y=0;
		for(int i=0;i<5;i++){
			for(int j=0;j<5;j++){
				cin>>v[i][j];
				if(v[i][j]){
					x=i;
					y=j;
				}
			}
		}
		int ans=abs(x-2)+abs(y-2);
		cout<<ans;


	
	
	return 0;
}