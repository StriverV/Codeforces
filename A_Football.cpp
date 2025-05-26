
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
    map<string, int> goals;  
    
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        goals[x]++;
    }

    int mx_goals = INT_MIN;
    string winner_team;

    for(auto i : goals)
        if(i.second > mx_goals)
        {
            mx_goals = i.second;
            winner_team = i.first;
        }

    cout << winner_team << nl;

    return 0;
}


// https://codeforces.com/problemset/problem/43/A