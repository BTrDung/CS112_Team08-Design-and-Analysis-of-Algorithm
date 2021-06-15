#include <iostream> 
#include <fstream>

#include <map>
#include <set> 
#include <stack> 
#include <deque> 
#include <vector> 
#include <algorithm> 

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
 
using namespace __gnu_pbds; 
using namespace std; 

tree<long long, null_type, less_equal<long long>, rb_tree_tag, tree_order_statistics_node_update> tr; 
// .insert() 
// .order_of_key() 

inline void solve()
{ 
    int n, m; 
    char f[101][101];

    cin >> n >> m; 
    for(int i = 1; i <= n; ++i) 
        for(int j = 1; j <=m; ++j) 
            cin >> f[i][j]; 
    

    char ans1[101][101]; 
    ans1[0][1] = 'W'; 
    for(int i =1; i <= n; ++i) 
    { 
        if (ans1[i - 1][1] == 'R') ans1[i][1] = 'W'; else ans1[i][1] = 'R'; 
        for(int j = 2; j <= m; ++j) if (ans1[i][j-1] == 'W') ans1[i][j] = 'R'; else ans1[i][j] = 'W'; 
    }

    char ans2[101][101]; 
    ans2[0][1] = 'R'; 
    for(int i =1; i <= n; ++i) 
    { 
        if (ans2[i - 1][1] == 'R') ans2[i][1] = 'W'; else ans2[i][1] = 'R'; 
        for(int j = 2; j <= m; ++j) if (ans2[i][j-1] == 'W') ans2[i][j] = 'R'; else ans2[i][j] = 'W'; 
    }   

    bool checkAns1 = true; 
    bool checkAns2 = true; 
    
    for(int i =1; i <= n; ++i) 
    { 
        for(int j = 1; j <= m; ++j) 
        { 
            if (f[i][j] == '.') 
                continue; 
            if (f[i][j] != ans1[i][j]) 
                checkAns1 = false; 
            if (f[i][j] != ans2[i][j]) 
                checkAns2 = false; 
        }
    }
    if (checkAns1 == true) 
    { 
        cout << "YES" << endl;
        for(int i = 1; i <= n; ++i) 
        { 
            for(int j = 1; j <= m; ++j) 
                cout << ans1[i][j]; 
            cout << endl; 
        }
        return;
    }
     if (checkAns2 == true) 
    { 
        cout << "YES" << endl;
        for(int i = 1; i <= n; ++i) 
        { 
            for(int j = 1; j <= m; ++j) 
                cout << ans2[i][j]; 
            cout << endl; 
        }
        return;
    }
    cout<<"NO"<<endl; 
    return;
}

int main()
{
    
    int t; 
    cin >> t; 
    for(; t != 0; --t) 
    { 
        solve(); 
    }
    return 0;
}
