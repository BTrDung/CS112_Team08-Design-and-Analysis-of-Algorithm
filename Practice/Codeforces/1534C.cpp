#include <iostream> 
#include <fstream>

#include <map>
#include <set> 
#include <stack> 
#include <deque> 
#include <vector> 
#include <algorithm> 

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 

#define NMAX 400005
using namespace __gnu_pbds; 
using namespace std; 

tree<long long, null_type, less_equal<long long>, rb_tree_tag, tree_order_statistics_node_update> tr; 
// .insert() 
// .order_of_key() 


vector<long long>G[NMAX]; 
map<long long, bool> vis; 
inline void dfs(long long u)
{ 
    vis[u] = 1; 
    for(int i = 0; i < G[u].size(); ++i) 
        if (vis[G[u][i]] == 0) 
            dfs(G[u][i]);
}
inline void solve()
{ 
    int n; 
    long long ans = 1;
    long long mod = 1e9 + 7;
    int a[NMAX]; 
    int b[NMAX]; 
    cin >> n;

    for(int i = 1; i <= n; ++i){ G[i]=vector<long long>(); cin >> a[i];}; 
    for(int i = 1; i <= n; ++i) cin >> b[i]; 

    vis = map<long long, bool>(); 
    for(int i = 1; i <= n; ++i) G[a[i]].push_back(b[i]), G[b[i]].push_back(a[i]); 
    for(int i = 1; i <= n; ++i) 
        if (vis[i] == 0){dfs(i), ans = ans * 2LL; ans = ans % mod;}
    cout << ans << endl;
}

int main()
{
    
    int t; 
    cin >> t; 
    for(; t != 0; --t) 
    { 
        solve(); 
    }
    return 0;
}
