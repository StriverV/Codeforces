
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
    vector<int>points (n);
    for(int i = 0; i < n; i++)
        cin >> points[i];

    int x = points [0];
    int y = points [0];

    int cnt = 0;
    for(auto point : points )
    {
        if( point  > x) 
        {
            x = point;
            cnt++;
        }    
        else if( point < y) 
        {
            y = point;
            cnt++;
        } 
    }

    cout << cnt << nl;
    return 0;
}
