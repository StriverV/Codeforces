
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

    int n;
    cin >> n;
    vector<int>v(n+5);
    for(int i = 1; i <= n; i++)
        cin >> v[i];

    vector<pair<int, int>> p;
    for(int i = 1; i <= n; i++)
    {
        p.push_back({v[i], i});
    }

    sort(p.begin(), p.end());   // sort by first


    for(auto i : p)
    {
        cout << i.second << " ";
    }
    cout << nl;
    
    
    return 0;
}



//way 2
// // Comparator function
// bool cmp(pair<int, int> a, pair<int, int> b) {
//     return a.second < b.second;
// }

// int main()
// {
//     Naba;

//     int n;
//     cin >> n;
//     vector<int> v(n+5);
//     for(int i = 1; i <= n; i++)
//         cin >> v[i];

//     vector<pair<int, int>> p;
//     for(int i = 1; i <= n; i++) {
//         p.push_back({i, v[i]});
//     }

//     sort(p.begin(), p.end(), cmp); // sort by second

//     for(auto i : p) {
//         cout << i.first << " ";
//     }
//     cout << nl;

//     return 0;
// }
