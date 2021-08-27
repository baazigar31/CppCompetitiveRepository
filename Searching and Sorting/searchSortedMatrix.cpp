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

int main(int argc, char const *argv[]) {
	clock_t begin = clock();
	file_i_o();
	// Write your code here....

	vector<vector<int>> v{{10,11,12,13},{14,15,16,17},{18,19,20,21},{22,23,24,25}};
	int target=24;
	pair<int,int> indx;
	int n=v.size();
	int m=v[n-1].size();

	//1st approach treat this as 1-D matrix
	//time complexity:log(n*m)=logn+logm;

	// int low=0;
	// int high=(n*m)-1;
	// bool ans=false;
	// while(low<=high){
	// 	int mid=(low+high)/2;
	// 	if(v[mid/n][mid%m]==target){
	// 		ans=true;
	// 		break;
	// 	}
	// 	else{
	// 		if(v[mid/n][mid%m]>target){
	// 			high=mid-1;
	// 		}else{
	// 			low=mid+1;
	// 		}
	// 	}
	// }

	// cout<<ans;

	//2nd Method

	int i=0;
	int j=n-1;
	int ans=-1;
	while(i<=j){
		int mid=(i+j)/2;
		if(v[mid][0]<=target and v[mid][m-1]>=target){
			//this is the required row

			int l=0;
			int r=m-1;
			while(l<=r){
				int m=(l+r)/2;
				if(v[mid][m]==target){
					ans=1;
					indx={mid,m};
					break;
				}else{
					if(v[mid][m]>target){
						r=m-1;
					}else{
						l=m+1;
					}
				}
			}
			break;

		}else{
			if(v[mid][0]>target){
				j=mid-1;
			}else{
				i=mid+1;
			}
		}
	}

	cout<<ans<<endl<<"Present at index "<<indx.ff<<","<<indx.ss;





	#ifndef ONLINE_JUDGE 
	  clock_t end = clock();
	  cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
	#endif 
	return 0;
}

