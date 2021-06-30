#include <iostream>
#include <vector>
#include <algorithm>
#define f(i, a, b, c) for (int i = a; i < b; i += c)
using namespace std;
int main () {
    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    string a, b;
    cin >> a >> b;
    int n = a.length(), m = b.length();
    if (n != m){
        cout << "NO" << endl;
        return 0;
    }
    char c[n], d[n];
    f(i, 0, n, 1) {
        c[i] = a[i];
        d[i] = b[i];
    }
    sort(c, c + n); sort(d, d + n);
    f(i, 0, n, 1)
        if (c[i] != d[i]) { 
            cout << "NO" << endl;
            return 0;
        }
    cout << "YES" << endl;
    return 0;
}