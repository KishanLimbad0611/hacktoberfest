#include <bits/stdc++.h>
using namespace std;
#define nline "\n"
#define TLE_ka_Chakkar ios_base::sync_with_stdio(false); cin.tie(NULL);
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
const ll mod = 1e9 + 7;
#define PI 3.141592653
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; ___print(x); cerr << endl;
#else
#define debug(x)
#endif
#define Forll(i,te1,te2) for(ll i = te1; i <= te2; ++i)
#define For(i,te1,te2) for(int i = te1; i <= te2; ++i)
#define Ford(i,a,b) for(int i = a; i >= b; --i)
#define Forv(i,v) for(int i = 0, _v = v.size(); i < _v; ++i)
int gcd(int u, int v){ return u%v==0?v:gcd(v,u%v);}
ll lcm(ll a, ll b){return (a*b)/__gcd(a,b);}
void ___print(ll t) {cerr << t;}
void ___print(int t) {cerr << t;}
void ___print(string t) {cerr << t;}
void ___print(char t) {cerr << t;}
void ___print(lld t) {cerr << t;}
void ___print(double t) {cerr << t;}
void ___print(ull t) {cerr << t;}
void solve(){
    int n;cin >> n;
    vector<int> v(n);
    For(i,0,n-1){
        cin >> v[i];
    }
    vector<int> pre(n+1,0);
    For(i,0,n-1){
        pre[v[i]]++;
    }
    int ans = 0;
    int k = pre[1];
    sort(v.begin(), v.end());
    Ford(i,k,1){
        int temp = i;
        int count = 0;
        int left = 0, right = n-1;
        while(left <= right){
            if(v[right] <= temp){
                ++left;
                --right;
                count++;
                --temp;
            }else{
                --right;
            }
        }
        if(count == i){
            cout << i << nline;return;
        }
    }
    cout << 0 << nline;
}
int main()
{
    TLE_ka_Chakkar
    #ifndef ONLINE_JUDGE
        cerr << "Time : " << 1000*((double)clock())/(double)CLOCKS_PER_SEC << "ms\n";
    #endif
    #ifndef ONLINE_JUDGE
        freopen("Error.txt", "w", stderr);
    #endif
    ll test = 1;
    cin >> test;
    For(test_output,1,test){
        // cout << "Case #" << test_output << ": "; // KickStart
        solve();
    }
    return 0;
}
