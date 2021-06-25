#include <iostream>
#include <map>
#include <vector>
const long long NMAX = 200009;
using namespace std;
long long f[NMAX];  
vector<long long> G[NMAX]; 
map<long long, long long> vis; 
void dfs(long long u, map<long long, long long> &dis) { 
    vis[u] = 1; 
    dis[f[u]] += 1; 
    for(int i = 0; i < G[u].size(); ++i) 
        if (vis[G[u][i]] == 0) 
        { 
            dfs(G[u][i], dis); 
        }
}
int main () {
    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);
    
    map<long long, long long> flag; 
    
    long long n; 
    long long result = 0; 

    cin >> n; 
    for(int i = 1; i <= n; ++i) cin >> f[i]; 
    
    for(int i = 1; i <= n; ++i) 
    { 
        if (flag[f[i]] == 0) flag[f[i]] = i; 
        G[flag[f[i]]].push_back(i); 
      	G[i].push_back(flag[f[i]]);
    }

    for(int i = 1; i <= n / 2; ++i) 
    { 
        G[i].push_back(n - i + 1); 
        G[n - i + 1].push_back(i); 
    }
 
    for(int i = 1; i <= NMAX; ++i) 
    { 
        map<long long, long long> distinct; 
        dfs(i, distinct);  
        if (distinct.size() == 0)
            continue; 
        else 
            result = result + distinct.size() - 1; 
    }
    cout << result << endl;
}