#include <iostream>
#include <vector>
#include <algorithm>
#define f(i, a, b, c) for (int i = a; i < b; i += c)
using namespace std;
bool cmp(int x, int y){
    return x > y;
}
int main () {
    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    int n;
    cin >> n;
    vector<int> a, b;
    int arr[n];
    f(i, 0, n, 1) cin >> arr[i];
    sort(arr, arr + n);
    for (int i = 0; i < n; ++i){        
        if (i & 1)
            b.push_back(arr[i]);
        else    
            a.push_back(arr[i]);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), cmp);
    f(i, 0, a.size(), 1)
        cout << a[i] << " ";
    f(i, 0, b.size(), 1)
        cout << b[i] << " ";
    return 0;
}