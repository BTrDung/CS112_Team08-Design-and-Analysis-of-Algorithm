#include <iostream>
#include <vector>
#include <algorithm>
#define ff first
#define ss second
using namespace std;
struct num{
    int prob, pen, num;
};
bool cmp(num a, num b){
    if (a.prob > b.prob)
        return 1;
    if (a.prob == b.prob) {
        if (a.pen < b.pen)
            return 1;
        if (a.pen == b.pen)
            return a.num < b.num;
    }
    return 0;
}
int main () {
    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    int n;
    cin >> n;
    vector<num> a(n);
    for (int i = 0; i < n; ++i){
        int x, y;
        cin >> x >> y;
        a[i].prob = x;
        a[i].pen = y;
        a[i].num = i + 1;
    }
    sort(a.begin(), a.end(), cmp);
    for (int i = 0; i < n; ++i)
        cout << a[i].num << " ";
    return 0;
}