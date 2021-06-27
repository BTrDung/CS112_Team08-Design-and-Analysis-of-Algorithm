#include <iostream>
#include <vector>
#include <algorithm>
#include <typeinfo>
using namespace std;
int pow(int base, int head){
    if (head == 0)
        return 1;
    if (head == 1)
        return base;
    int tmp = pow(base, head>>1) * pow(base, head>>1);
    if (head & 1)
        return tmp * base;
    else   
        return tmp;
}
int constructingNum(vector<int> a){
    int sum = 0, cnt = 0;
    for (int i = a.size() - 1; i >=0; --i){
        sum += a[i] * pow(10, cnt++);
    }
    return sum;
}
bool cmp(int i, int j){
    return i > j;
}
int main () {
    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    string s;
    cin >> s;
    vector<int> a(s.length());
    for (int i = 0; i < s.length(); ++i){
        // cout << s[i] << " ";
        a[i] = (int)(s[i] - '0');
    }
    sort(a.begin(), a.end());
    int small = constructingNum(a);
    sort(a.begin(), a.end(), cmp);
    int big = constructingNum(a);
    cout << small + big << endl;
    return 0;
}