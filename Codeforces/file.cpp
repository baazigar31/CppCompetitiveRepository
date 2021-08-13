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


	// set<int,greater<int> > s;
	// s.insert(10);
	// s.insert(20);
	// s.insert(30);
	// s.insert(40);
	// s.insert(50);
	// for(auto el:s){
	// 	cout<<el<<endl;
	// }
	// cout<<endl;

		priority_queue<int,vector<int>, greater<int>> pq;
		pq.push(10);
		pq.push(20);
		pq.push(30);
		pq.push(40);
		while(!pq.empty()){
			cout<<pq.top()<<endl;
			pq.pop();
		}
	
	return 0;
}