#include <iostream>
#include <algorithm>
using namespace std;
int main () {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) cin >> a[i];
    sort(a, a + n);
    for (int i = 0; i < n; ++i)
        if (a[i] != i + 1) {
            cout << "No" << endl;
            return 0;
        }
    cout << "Yes" << endl;
    return 0;
}