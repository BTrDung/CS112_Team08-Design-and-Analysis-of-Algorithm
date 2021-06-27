#include <iostream>
#include <vector>
#include <algorithm>
#define ff first
#define ss second
#define f(i, a, b, c) for (int i = a; i < b; i +=c)
using namespace std;
bool cmp(int a, int b){
    return a > b;
}
int main () {
    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);
    string s;
    cin >> s;
    int a[3];
    a[0] = s[0] - '0'; a[1] = s[1] - '0'; a[2] = s[2]-'0';
    sort(a, a + 3);
    int sum1 = a[0]*100 + a[1]*10 + a[2];
    sort(a, a + 3, cmp);
    int sum2 = a[0]*100 + a[1]*10 + a[2];
    cout << sum1 + sum2 << endl;
    return 0;
}