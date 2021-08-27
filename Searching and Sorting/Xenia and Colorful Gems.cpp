// Problem Link - 
/* By Shubham Anand */
#include<bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
//#include <ext/pb_ds/trie_policy.hpp>
//using namespace __gnu_pbds;
using namespace std;
#define ll 				long long int
#define ld				long double
#define mod             1000000007
#define inf             1e18
#define endl			"\n"
#define pb 				push_back
#define vi              vector<ll>
#define vs				vector<string>
#define pii             pair<ll,ll>
#define ump				unordered_map
#define mp 				make_pair
#define pq_max          priority_queue<ll>
#define pq_min          priority_queue<ll,vi,greater<ll> >
#define all(n) 			n.begin(),n.end()
#define ff 				first
#define ss 				second
#define mid(l,r)        (l+(r-l)/2)
#define bitc(n) 		__builtin_popcount(n)
#define loop(i,a,b) 	for(int i=(a);i<=(b);i++)
#define looprev(i,a,b) 	for(int i=(a);i>=(b);i--)
#define iter(container, it) for(__typeof(container.begin()) it = container.begin(); it != container.end(); it++)
#define log(args...) 	{ string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
#define logarr(arr,a,b)	for(int z=(a);z<=(b);z++) cout<<(arr[z])<<" ";cout<<endl;	
template <typename T> T gcd(T a, T b){if(a%b) return gcd(b,a%b);return b;}
template <typename T> T lcm(T a, T b){return (a*(b/gcd(a,b)));}
vs tokenizer(string str,char ch) {std::istringstream var((str)); vs v; string t; while(getline((var), t, (ch))) {v.pb(t);} return v;}


void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
	cout << *it << " = " << a << endl;
	err(++it, args...);
}
//typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> pbds;
//typedef trie<string,null_type,trie_string_access_traits<>,pat_trie_tag,trie_prefix_search_node_update> pbtrie;

void file_i_o()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
}

ll ans=LLONG_MAX;
// long long sq(int x) { return 1ll * x * x; }
void solve(vector<ll> &red,vector<ll> &green,vector<ll> &blue){


	 for(ll i=0;i<green.size();i++){
	 	auto z=lower_bound(blue.begin(),blue.end(),green[i])-blue.begin();
	 	auto x=upper_bound(red.begin(),red.end(),green[i])-red.begin()-1;
	 	if(z>=0 and z<blue.size() and x>=0 and x<red.size()){
	 		ll h=(ll)pow((red[x]-green[i]),2)+(ll)pow((green[i]-blue[z]),2)+(ll)pow((blue[z]-red[x]),2);
	 		ans=min(ans,h);
	 	}
	 }
}

int main(int argc, char const *argv[]) {
	clock_t begin = clock();
	file_i_o();
	// Write your code here....

	ll t;
	cin>>t;
	while(t--){
		ll r,g,b;
		cin>>r>>g>>b;
		vector<ll> red(r,0);
		loop(i,0,r-1){
			cin>>red[i];
		}
		vector<ll> green(g,0);
		loop(i,0,g-1){
			cin>>green[i];
		}
		vector<ll> blue(b,0);
		loop(i,0,b-1){
			cin>>blue[i];
		}
		sort(red.begin(),red.end());
		sort(green.begin(),green.end());
		sort(blue.begin(),blue.end());

		ans=LLONG_MAX;
		solve(red,green,blue);
		solve(red,blue,green);
		solve(green,red,blue);
		solve(green,blue,red);
		solve(blue,red,green);
		solve(blue,green,red);
		cout<<ans<<endl;
		

	}





	#ifndef ONLINE_JUDGE 
	  clock_t end = clock();
	  cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
	#endif 
	return 0;
}

