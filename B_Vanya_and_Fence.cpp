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

    int TestCase;
    cin >> TestCase;

    while(TestCase--)
    {

        int n;
        cin >> n;

        vector<int>p(n);
        for(int i = 0; i < n; i++)
            cin >> p[i];
        
        sort(p.begin(), p.end());

        p[0] += 1;
        
        ll pro = 1;
        for(auto i : p)
            pro *= i;
        
        cout << pro << nl;
      
    }

    return 0;
}
//problem statement
// https://codeforces.com/contest/1873/problem/B
