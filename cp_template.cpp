#include <bits/stdc++.h>
#include <numeric>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
using namespace std;
#define abid                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long
#define vl vector<ll>
#define vc vector<char>
#define vi vector<int>
#define vvc vector<vector<char>>
#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>
#define vvl vector<vector<ll>>
#define vpi vector<pair<int, int>>
#define vpl vector<pair<ll, ll>>
#define gl greater<ll>
#define vp vector<pair<ll, ll>>
using ull = unsigned long long;
const int MOD = 1e9 + 7;
const int MOD2 = 998244353;
const int MAXN = 1e6;
// using ordered_set =
// typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less<int>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> ordered_set;
ll gcd(ll a, ll b)
{
    while (b != 0)
    {
        ll t = b;
        b = a % b;
        a = t;
    }
    return a;
}
class disjointSet
{
public:
    vl rank, parent, size;
    disjointSet(ll n)
    {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        for (int i = 0; i <= n; i++)
        {
            parent[i] = i;
        }
        size.resize(n + 1, 1);
    }
    ll findUParent(int node)
    {
        if (node == parent[node])
            return node;
        return parent[node] = findUParent(parent[node]);
    }
    void unionByRank(ll u, ll v)
    {
        ll ulp_u = findUParent(u);
        ll ulp_v = findUParent(v);
        if (ulp_u == ulp_v)
            return;
        if (rank[ulp_u] < rank[ulp_v])
        {
            parent[ulp_u] = ulp_v;
        }
        else if (rank[ulp_v] < rank[ulp_u])
        {
            parent[ulp_v] = ulp_u;
        }
        else
        {
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }
    void unionBySize(ll u, ll v)
    {
        ll ulp_u = findUParent(u);
        ll ulp_v = findUParent(v);
        if (ulp_u == ulp_v)
            return;
        if (size[ulp_u] < size[ulp_v])
        {
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        }
        else
        {
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
    }
};
int cnt_bit(ll n)
{
    return __builtin_popcountll(n);
}
vl primeFactors(ll n)
{
    vl factors;
    if (n % 2 == 0)
    {
        factors.push_back(2);
        while (n % 2 == 0)
        {
            n = n / 2;
        }
    }
    for (ll i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
        {
            factors.push_back(i);
            while (n % i == 0)
            {
                n = n / i;
            }
        }
    }
    if (n > 1)
        factors.push_back(n);
    return factors;
}
void solve(){
  
}
 
    int32_t main()
    {
        // pre_fact();
        abid
 
            int t;
        cin >> t;
        while (t--)
        {
            solve();
        }
        //solve();
        return 0;
    }