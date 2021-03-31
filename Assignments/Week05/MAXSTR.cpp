#include <iostream>
#include <algorithm>
using namespace std;
string deletee(string str, int j){
    string tmp = "";
    for (int i = 0; i < str.length(); ++i)
        if (i != j)
            tmp += str[i];
    return tmp;
}
int main () {
    string str;
    cin >> str;

    int sum = 0;
    string ans = "";
    string tmp = str;
    sort(tmp.begin(), tmp.end());
    for (int i = 0; i < tmp.length(); ++i){ 
        ans += tmp[i];
        sum += tmp[i] - '0';
    }
    for (int i = tmp.length() - 1; i >= 0; --i)
        if (ans[i] - '0' % 3 == 1 && sum % 3 == 1) { 
            ans = deletee(ans, i);
            return 0;
        }
        else if (ans[i] - '0' % 3 == 2 && sum % 3 == 2) {
            ans = deletee(ans, i);
            return 0;
        }
    for (int i = ans.length() - 1; i >= 0; --i)
        cout << ans[i];
    cout << endl;
    return 0;
}

// def deletee(string, j):
//     tmp = ""
//     for i in range(len(string)):
//         if i != j:
//             tmp += string[i]
//     return tmp

// string = input()
// summ, ans, tmp = 0, "", sorted(string, reverse=True)

// for i in range(len(tmp)):
//     ans += tmp[i]
//     summ += (int)(tmp[i])

// for i in range(len(tmp))[::-1]:
//     if (int)(ans[i]) % 3 == 1 and summ % 3 == 1:
//         ans = deletee(ans, i)
//         break
//     elif (int)(ans[i]) % 3 == 2 and summ % 3 == 2:
//         ans = deletee(ans, i)
//         break
//     else:
//         continue
// print(ans)
