#include<bits/stdc++.h>
#define Naba ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long 
#define bl bool 
#define nl '\n'
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
using namespace std;

int main()
{
    Naba;

    int a,b,c;
    cin >> a >> b >> c;

    int mn = min({a,b,c});
    int mx = max({a,b,c});

    vector<int>v={a,b,c};

    int mid;
    for(auto i : v)
    {
        if(i != mn && i != mx)    mid = i;
    }

    int dis1 = mx - mid;
    int dis2 = mid - mn;

    cout << dis1+dis2 << nl;

    return 0;
}
