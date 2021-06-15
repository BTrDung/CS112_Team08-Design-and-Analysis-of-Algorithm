#include <iostream> 
#include <fstream>

using namespace std; 

void solve()
{ 
    int n, l, r;
    int f[200005]; 

    cin >> n ;
    for(int i =1; i <= n; ++i)
        cin >> f[i];    

    int sum = 0; 
    for(int i = 1;i <= n; ++i) 
        sum += f[i]; 
    // -------------------------------
    if (sum % n != 0)
    { 
        cout << -1 << endl;
        return;
    }
    // -------------------------------
    
    sum /= n; 
    int result = 0;
    for(int i = 1; i <= n; ++i) 
    { 
        if(f[i] > sum)
        { 
            result += 1; 
        }
    }
    cout<< result << endl;

    return; 
}

int main()
{
    
    int t; 
    cin >> t; 
    for(int i = 1; i <= t; ++i) 
    { 
        solve(); 
    }    
    return 0;
}
