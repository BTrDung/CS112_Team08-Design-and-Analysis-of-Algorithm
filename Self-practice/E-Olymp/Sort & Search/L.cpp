#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
bool cmp(int x, int y){
    return x > y;
}
int main () {
    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    int n;
    cin >> n;
    vector<int> odd, even;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (x & 1)
            odd.push_back(x);
        else 
            even.push_back(x);
    } 
    sort(even.begin(), even.end(), cmp);
    sort(odd.begin(), odd.end());
    for (int i : odd)
        cout << i << " ";
    // cout << endl;
    for (int i : even)
        cout << i << " ";
    return 0;
}