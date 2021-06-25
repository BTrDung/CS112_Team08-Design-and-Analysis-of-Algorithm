#include <bits/stdc++.h>
#define oo 1e9+9
using namespace std;
int bs(vector<pair<long long, long long>> &a, vector<long long> &sum, long long &x)
{ 
    int l = 0; 
    int r = a.size() - 1; 
    int mid = (l + r )>>1; 
    while(l != mid && mid != r)
    { 
        if (sum[mid] < x) 
            l = mid; 
        else 
            r = mid; 
        mid = (l + r)>>1; 
    }
    if (sum[l] >= x) return l; 
    return r; 
}
void solve(vector<long long> a, int n, vector<long long> k, int q){
    unordered_map<long long, long long> ans; 
    vector<pair<long long, long long>> interval; 
    vector<long long> sum; 
    a[0] = 0;  
    a[n + 1] = oo;
    for(int i = 0; i <= n; ++i) 
        if (a[i] + 1 != a[i + 1]) 
        { 
            interval.push_back({a[i] + 1, a[i + 1] - 1});
            long long l = a[i] + 1; 
            long long r = a[i + 1] - 1; 
            if (interval.size() == 1)
                sum.push_back(r - l + 1); 
            else 
                sum.push_back(r - l + 1 + sum[sum.size() - 1]); 
        }
    
    for(int i = 1; i <= q; ++i)
    { 
        if (ans[k[i]] != 0)
        { 
            cout << ans[k[i]] << endl;
        }
        int index_interval = bs(interval, sum, k[i]); 
        if (index_interval - 1 < 0) 
        { 
            long long res = interval[index_interval].first + k[i] - 1;
            cout << res << endl;
            ans[k[i]] = res;
        }
        else 
        { 
            long long res = interval[index_interval].first + k[i] - sum[index_interval - 1] - 1;
            cout << res << endl;
            ans[k[i]] = res;
        }
    }
}
int main () {
    // freopen("DEBUG.INP", "r", stdin);
    // freopen("DEBUG.OUT", "w", stdout);

    int n, q;
    cin >> n >> q;
    vector<long long> a(n + 9);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    vector<long long> k(q + 9);
    for (int i = 1; i <= q; ++i)
        cin >> k[i];
    solve(a, n, k, q);
    return 0;
}