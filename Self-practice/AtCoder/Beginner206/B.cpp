#include <iostream>
using namespace std;
long long bs(long long l, long long r, long long x) { 
    long long mid = (l + r)>>1; 
    while(mid != l && mid != r)
    { 
        long long s = (1 + mid) * mid / 2; 
        if (s > x)
            r = mid; 
        else 
            l = mid; 
        mid = (l + r) / 2; 
    }
    if ((1 + l) * l / 2 >= x) return l; 
    return r; 
}
int main () { 
    long long n; 
    cin >> n; 
    cout << bs(1, 1000000000, n);
}