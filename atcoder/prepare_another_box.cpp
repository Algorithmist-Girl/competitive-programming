// #include <bits/stdc++.h>
#include "bits/stdc++.h"
using namespace std;

// << and >> are much faster. e.g. 5 << 4 means 5 in binary shifted 4 to the left so 5 * 2^4. and 5 >> 1 means 5/2. so * and / by 2.
// x & 1 if it's 1 (so True) then x is odd. otherwise x is even.
// ~ = complement bitwise not operator flipping the bits.
// 1 = True in C++. 0 = False in C++. 
using ll= long long;
typedef map<ll,ll> mll;
#define loop1(i,start, n) for(ll i=start;i<n;i++)
#define loop2(i,n) for(ll i=0;i<n;i++)

bool sort_pairs_ascending(pair<ll,ll> &pair_one, pair<ll,ll> &pair_two) { return (pair_one.second < pair_two.second); }
bool sort_pairs_descending(pair<ll,ll> &pair_one, pair<ll,ll> &pair_two) { return (pair_one.second > pair_two.second); }
ll pow_mod(ll base, ll pow, ll mod_val) { ll res = 1; base = base % mod_val; if (base == 0) return 0; while (pow > 0) { if (pow & 1)res = (res*base) % mod_val; pow = pow>>1; base = (base*base) % mod_val; } return res; }
ll gcd(ll x, ll y) { if (y == 0) return x; return gcd(y, x % y); }
ll lcm(ll x, ll y) { return (x*y) / gcd(x, y); }
void print_arr(ll curr[], ll n) { loop2(i, n) cout << curr[i] << " "; cout << '\n'; }
void print_arr_string(string curr[], ll n) { loop2(i, n) cout << curr[i] << " "; cout << '\n'; }
string print_arr_1(ll curr[], ll n) { string res = ""; loop2(i, n) res += to_string(curr[i]) + " "; res += '\n'; return res; }
string print_arr_1_string(string curr[], ll n) { string res = ""; loop2(i, n) res += curr[i] + " "; res += '\n'; return res; }
ll gcd_diophantine(ll a, ll b, ll& x_0, ll& y_0) { if (b == 0) { x_0 = 1; y_0 = 0; return a; } ll x_1, y_1; ll gcd_val = gcd_diophantine(b, a % b, x_1, y_1); x_0 = y_1; y_0 = x_1 - y_1 * (a / b); return gcd_val; }
bool diophantine_compute_a_sol(ll a, ll b, ll c, ll &x_0, ll &y_0, ll &gcd_val) { gcd_val = gcd_diophantine(abs(a), abs(b), x_0, y_0); if (c % gcd_val) { return false; } x_0 *= c / gcd_val; y_0 *= c / gcd_val; if (a < 0) x_0 = -x_0; if (b < 0) y_0 = -y_0; return true; }
string decimal_to_binary(ll num) { string s=""; while (num > 0) { s = to_string(num % 2) + s; num = num / 2; } return s; }
ll binary_to_decimal(string num) { ll res = 0; ll base = 1; ll len = num.length(); for(ll i = len - 1; i >= 0; i--) { if (num[i] == '1') { res += base; } base = base * 2; } return res; }
bool is_prime(ll num) { if(num<=1)return false; for (ll i = 2; i * i <= num; i++) { if (num % i == 0) return false; } return true; }

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll t; cin >> t; 
    loop2(i, t) {

        ll n, k; cin >> n >> k;
        

    }
    return 0l;
}

