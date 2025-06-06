#include<bits/stdc++.h>
#define Naba ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long 
#define bl bool 
#define nl '\n'
using namespace std;

int main()
{
    Naba

    int TestCase;
    cin >> TestCase;

    while(TestCase--)
    {
        int n; cin >> n;
        vector<int>v(n);
        map<int,int>mp;
        
        for(int i = 0; i < n; i++) 
        {
            cin >> v[i];
            mp[v[i]]++;
        }

        
        
        int d=0;
        for(auto i : mp)
            if(i.second == 1)
               d = i.first;

        for(int i = 0; i < n; i++)    if(v[i] == d)    cout << i+1 << nl;
    }

    return 0;
}

