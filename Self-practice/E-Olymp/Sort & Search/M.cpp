#include <iostream>
#include <vector>
#include <algorithm>
#define ff first
#define ss second
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b){
    if (a.ss < b.ss)
        return 1;
    if (a.ss == b.ss)
        return a.ff < b.ff;
    return 0;
}
int main () {
    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; ++i){
        int x;
        cin >> x;
        a[i] = {x, x % 10};
    }   
    sort(a.begin(), a.end(), cmp);
    for (int i = 0; i < n; ++i)
        cout << a[i].ff << " ";
    return 0;
}