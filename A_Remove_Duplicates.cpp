
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

    int n;
    cin >> n;
    vector<int>v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    set<int>vis;
    vector<int>rd;
    for (int i = v.size()-1;i >= 0; i--) 
    {
        if(!vis.count(v[i]))
        {
            vis.insert(v[i]);
            rd.push_back(v[i]);
        }
            
    }
    
    reverse(rd.begin(), rd.end());
    cout << vis.size() << nl;

    for (auto i : rd) 
        cout << i << " ";

    return 0;
}