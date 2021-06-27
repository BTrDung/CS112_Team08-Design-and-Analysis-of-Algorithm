#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
#define ff first
#define ss second
#define f(i, a, b, c) for (int i = a; i < b; i +=c)
using namespace std;
struct bike{
    long double ratio;
    long double chain, back;
};
bool cmp(bike a, bike b){
    if (a.ratio < b.ratio)
        return 1;
    if (a.ratio == b.ratio)
        return a.chain < b.chain;
    return 0;
}
int main () {
    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);
    
    int chain = 3, back = 7;
    long double c[chain], b[back];
    f(i, 0, chain, 1) cin >> c[i];
    f(i, 0, back, 1) cin >> b[i];
    vector<bike> ans;
    f(i, 0, chain, 1){
        f(j, 0, back, 1) {
            ans.push_back({c[i]/b[j], (long double)(i + 1), (long double)(j + 1)}); 
        }
    }
    sort(ans.begin(), ans.end(), cmp);
    f(i, 0, 21, 1) { 
        cout << setprecision(2) << fixed << ans[i].ratio << " ";
        cout << (int)(ans[i].chain) << " " << (int)(ans[i].back) << endl;
    }
    return 0;
}
