#include <bits/stdc++.h>
#include <chrono> 
using namespace std;
using namespace std::chrono; 
 
template<class T> using min_pq=priority_queue<T, vector<T>, greater<T>>;

#define john {ios_base::sync_with_stdio(false);}
#define cena {cin.tie(NULL);}
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define f0r(a, b) for (long long a = 0; a < (b); ++a)
#define F0R(i, a, b) for (int i=a; i<(b); i++)
#define EACH(x, a) for (auto& x: a)
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
#define SUM(a) accumulate(a.begin(), a.end(), 0)
typedef long long ll;
typedef long double lld;
typedef unsigned long long ull;
 

 
mt19937_64 rng(std::chrono::steady_clock::now().time_since_epoch().count());
// mt19937_64 rng(61378913);
/* usage - just do rng() */


const char newl = '\n';
//const lld pi = 3.14159265358979323846;
//const ll mod = 1000000007;
//const ll mod = 998244353;
// ll mod;
void dbg(vector<int> v){for(auto x : v) cout << x << ' '; cout << newl;}
void dbg(vector<vector<int>> v){for(auto row : v){for(auto x : row) cout << x<< ' ';cout << newl;}}
void usaco(string filename) {
  // #pragma message("be careful, freopen may be wrong")
	freopen((filename + ".in").c_str(), "r", stdin);
	freopen((filename + ".out").c_str(), "w", stdout);
}
 
 int gcd(int a, int b){
	 if(b==0) return a;
	 return gcd(b, a % b);

 }

	


void solve(int tc = 0) {
	int n;
	cin >> n;
	vector<vector<int>> v(2, vector<int> (n, 0));
	f0r(i, 2) f0r(j, n) cin >> v[i][j];
	vector<vector<int>> prefix(2, vector<int> (n+1, 0));
	f0r(i, 2){
		f0r(j, n){
			prefix[i][j+1] = v[i][j] + prefix[i][j];
		}
	}
	int s=0;
	int ans = INT_MAX;
	for(int i=1;i<=n;i++){
		s = max(prefix[1][i-1], prefix[0][n] - prefix[0][i]);
		ans = min(ans, s);
	}
	cout << ans << newl;

	



	





}//end solve
 
int main() {
	
	auto begin = std::chrono::high_resolution_clock::now();
	john cena
	cout << setprecision(15) << fixed;
								
	
	
	int tc = 1;
	cin >> tc;
	for (int t = 0; t < tc; t++) solve(t);
	//need testcases?
	
	
	auto end = std::chrono::high_resolution_clock::now();
	cerr << setprecision(4) << fixed;
	cerr << "Execution time: " << std::chrono::duration_cast<std::chrono::duration<double>>(end - begin).count() << " seconds" << endl;
	
}//end main










