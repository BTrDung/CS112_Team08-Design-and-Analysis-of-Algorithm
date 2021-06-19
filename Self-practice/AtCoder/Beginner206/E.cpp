#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;
int gcd(int a, int b){
    return (b == 0) ? a : gcd(b, a % b);
}
int bs(vector<int> a, int l, int r, int x){
    if (r >= l) {
        int mid = (l + r) >> 1;
        if (a[mid] == x)
            return mid;
        if (x < a[mid])
            return bs(a, 0, mid - 1, x);
        return bs(a, l + 1, r, x);
    }
    return -1;
}
int main () {
    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    int l, r;
    cin >> l >> r;
    vector<int> a;
    for (int i = l; i <= r; ++i) {
        a.push_back(i);
    }
    int cnt = 0;
    for (int i = 0; i < a.size() - 1; ++i) {
        for (int j = i + 1; j < a.size(); ++j){
            int g = gcd(a[i], a[j]);
            if (g != 1 && a[j] != g && a[i] != g)
                cnt++;
        }
    }
    cout << (cnt<<1) << endl;
    return 0;
}