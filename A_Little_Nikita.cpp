#include<bits/stdc++.h>
#define Naba ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define nl '\n'
using namespace std;

int main()
{
    Naba;

    int testcase;
    cin >> testcase;
    
    while(testcase--)
    {
        pair<int,int>p;
        
        cin >> p.first >> p.second;
        
        if(p.first >= p.second && (p.first-p.second)%2 == 0)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
        
    }
        
    return 0;
}