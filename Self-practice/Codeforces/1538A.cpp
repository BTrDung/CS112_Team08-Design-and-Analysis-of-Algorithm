#include <iostream> 
#include <fstream>

using namespace std; 

void solve()
{ 
    int n; 
    int f[101]; 

    cin >> n; 
    for(int i =1; i <= n; ++i)
    { 
        cin >> f[i]; 
    }

    int maxx = -999999999; 
    int minn = 99999999; 

    int id_max, id_min; 
    for(int i = 1; i <= n; ++i) 
    { 
        if (f[i] > maxx)
        { 
            maxx = f[i]; 
            id_max =i;
        }
        if (f[i] < minn)
        { 
            minn = f[i]; 
            id_min = i; 
        }
    }
 
    int f1 = min(id_min, id_max); 
    int f2 = max(id_min, id_max);

    cout << min(f1 + (n - f2 + 1), min(f2, n - f1 + 1))<< endl;
    return; 
}

int main()
{
    // freopen("DEBUG.INP","r",stdin);
    // freopen("DEBUG.OUT","w",stdout);

    int t; 
    cin >> t; 
    for(int i = 1; i <= t; ++i) 
    { 
        solve(); 
    }    
    return 0;
}
