#include <iostream>
#include <algorithm>
using namespace std;
struct hour{
    int h, m, s;
};
bool cmp(hour a, hour b){
    if (a.h < b.h)
        return 1;
    if (a.h == b.h){
        if (a.m < b.m)
            return 1;
        if (a.m == b.m)
            if (a.s < b.s)
                return 1;
    }
    return 0;
}
int main () {
    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    int n;
    cin >> n;
    hour a[n];
    for (int i = 0; i < n; ++i){
        int x, y, z;
        cin >> x >> y >> z;
        a[i].h = x; a[i].m = y; a[i].s = z;
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; ++i){
        cout << a[i].h << " " << a[i].m << " "<< a[i].s << endl;
    }
    return 0;
}