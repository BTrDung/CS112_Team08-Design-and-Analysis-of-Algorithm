#include <iostream>
#include <vector>
#include <algorithm>
#define ff first
#define ss second
#define f(i, a, b, c) for (int i = a; i < b; i +=c)
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b){
    if (a.ff > b.ff)
        return 1;
    if (a.ff == b.ff)
        if (a.ss < b.ss)
            return 1;
    return 0;
}
int main () {
    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        a[i] = {x, i + 1};
    }
    sort(a.begin(), a.end(), cmp);
    f(i, 0, n, 1)
        cout << a[i].ss << " ";
    return 0;
}