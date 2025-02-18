#include <bits/stdc++.h>

using namespace std;

/* TYPE DEFINITION */
#define ll long long
#define int32 long int 
#define uint32 unsigned int 
#define int64 long long int 
#define uint64 unsigned long long 

#define vi vector<int> 
#define vl vector<long long>
#define vvi vector<vector<int>>
#define vvl vector<vector<long long>>
#define pii pair<int, int>
#define pll pair<long long, long long>

/* UTILS */
#define f first
#define s second
#define pb push_back
#define nn '\n'
#define sp << " " <<
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795

/* FUNCTIONS */
bool prime(ll a) { if (a == 1) return 0; for (int i = 2; i <= round(sqrt(a)); i++) if (a % i == 0) return 0; return 1; }
void yes() { cout << "YES\n"; }
void no() { cout << "NO\n"; }

/* PRINTS */
template <class T> 
void print_v(vector<T> &v) { cout << "{"; for (auto x : v) cout << x << ","; cout << "\b}"; } 

/* solve HEADER */
void solve();

/* MAIN */
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    // solve();
    int t; cin >> t; while (t--) { solve(); }
    return 0;
}
void solve() {
}