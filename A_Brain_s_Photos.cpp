#include<bits/stdc++.h>
#define Naba ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long 
#define bl bool 
#define nl '\n'
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
using namespace std;

int main()
{
    Naba;

    int n,m;
    cin >> n >> m;

    bl color = 1;
    for (int i = 0; i < n; ++i) 
        for (int j = 0; j < m; ++j)
        {
            char c;  cin >> c;
            if (c == 'C' || c == 'M' || c == 'Y')    color = 0;
        }
    
    color? cout << "#Black&White" << nl: cout << "#Color" << nl;

    return 0;
}

// https://codeforces.com/problemset/problem/707/A